#ifndef GUARD_drawShape_h
#define GUARD_drawShape_h
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#define w 400
void myEllipse(cv::Mat, double);
void myFilledCircle(cv::Mat,cv::Point);
void myPolygon(cv::Mat);
void myLine(cv::Mat,cv::Point,cv::Point);

#endif

