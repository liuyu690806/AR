#ifndef CAMERA_H
#define CAMERA_H

#include <QMatrix4x4>
#include <opencv2/opencv.hpp>
#include <opencv2/aruco.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <vector>
using namespace cv;
using namespace std;

class camera
{
public:
    camera();
    ~camera();
    void readCamParameters();
    void pose_estimate(Mat& image);
    Mat getCameraMatrix();

    Mat viewMatrix;
    bool is_mark;

private:
    float markerLength = 0.043;

    Mat camera_matrix;
    Mat dist_coeffs;

    Mat cvToGl;
    cv::Mat rot;
    cv::Vec3d r;
    cv::Vec3d t;

    Ptr<aruco::Dictionary> dictionary;
    Ptr<aruco::DetectorParameters> detectorParams;
    std::vector< int > markerIds;
    std::vector< std::vector<cv::Point2f> > markerCorners, rejectedCandidates;

};

#endif // CAMERA_H
