//goals
/*
1-/ use Point to define 2D points in an image veya 

*/
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include "drawShape.h"
using cv::Mat;
using cv::Point;
int main(){
    // char AtomWindow[] = "Drawing 1: Atom";
    // char Rook[] = "Drawing 2: Rook";
     cv::namedWindow("Atom Window",cv::WINDOW_AUTOSIZE);
     cv::namedWindow("Rook",cv::WINDOW_AUTOSIZE);
    //CV_8UC3 depicts : 3 channels,8 bit image depth
    Mat atom = Mat::zeros(500, 500, CV_8UC3);
    Mat rook = Mat::zeros(500, 500, CV_8UC3);
    myEllipse(atom,90);
    myEllipse(atom,0);
    myEllipse(atom,45);
    myEllipse(atom,-45);
    myFilledCircle(atom,Point(w/2,w/2));
    myPolygon(rook);

    cv::rectangle(rook,Point(0,7*w/8),
    Point(w,w),cv::Scalar(0,255,255),cv::FILLED,cv::LINE_8);

    myLine( rook, Point( 0, 15*w/16 ), Point( w, 15*w/16 ) );
    myLine( rook, Point( w/4, 7*w/8 ), Point( w/4, w ) );
    myLine( rook, Point( w/2, 7*w/8 ), Point( w/2, w ) );
    myLine( rook, Point( 3*w/4, 7*w/8),Point( 3*w/4, w ) );

   
    cv::imshow("Atom Window",atom);
    cv::moveWindow("Atom Window",0,200);
    cv::imshow("Rook",rook);
    cv::moveWindow("Rook",w,200);
    cv::waitKey(0);
    



    return 0;
}