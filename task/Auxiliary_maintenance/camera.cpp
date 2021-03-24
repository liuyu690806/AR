#include "camera.h"

camera::camera()
{
    this->readCamParameters();
    this->viewMatrix = Mat::zeros(4, 4, CV_32F);
    this->detectorParams = aruco::DetectorParameters::create();
    cvToGl = Mat::zeros(4, 4, CV_32F);
    cvToGl.at<float>(0, 0) = 1.0f;
    cvToGl.at<float>(1, 1) = -1.0f;
    cvToGl.at<float>(2, 2) = -1.0f;
    cvToGl.at<float>(3, 3) = 1.0f;
}

camera::~camera()
{}

void camera::readCamParameters()
{
   this->dictionary = aruco::getPredefinedDictionary(aruco::DICT_6X6_250);

   camera_matrix = (Mat_<float>(3,3) << 634.254,   0.0,         337.540,
                                        0.0,       633.688f,    215.845,
                                        0.0,       0.0,         1.0     );

   dist_coeffs = (Mat_<float>(1, 4) << 0.025742, -0.095074, -0.006659, 0.005563);
}


void camera::pose_estimate(Mat &image)
{
    cv::aruco::detectMarkers(image, this->dictionary, markerCorners, markerIds, this->detectorParams, rejectedCandidates);

    if (markerIds.size() > 0)
    {
        std::vector< cv::Vec3d > rvecs, tvecs;
        cv::aruco::drawDetectedMarkers(image, markerCorners, markerIds);
        cv::aruco::estimatePoseSingleMarkers(markerCorners, this->markerLength, this->camera_matrix, this->dist_coeffs, rvecs, tvecs);

        for (unsigned int i = 0; i < markerIds.size(); i++)
        {
            cv::Mat rot;
            cv::Vec3d r = rvecs[i];
            cv::Vec3d t = tvecs[i];

            this->viewMatrix = cv::Mat::zeros(4, 4, CV_32F);
            Rodrigues(rvecs[i], rot);

            for (unsigned int row = 0; row < 3; ++row)
            {
                for (unsigned int col = 0; col < 3; ++col)
                {
                    this->viewMatrix.at<float>(row, col) = (float)rot.at<double>(row, col);
                }
                this->viewMatrix.at<float>(row, 3) = (float)tvecs[i][row];
            }
            this->viewMatrix.at<float>(3, 3) = 1.0f;

            this->viewMatrix = cvToGl * this->viewMatrix;
            cv::transpose(this->viewMatrix, this->viewMatrix);
            cv::aruco::drawAxis(image, camera_matrix, dist_coeffs, r, t, 2.0 * markerLength);
        }
        this->is_mark = true;
    }
    else
    {
        this->is_mark = false;
    }

}

Mat camera::getCameraMatrix()
{
    return this->camera_matrix;
}
