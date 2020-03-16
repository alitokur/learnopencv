
#include "drawShape.h"

using cv::Mat;  using cv::circle;
using cv::Size;
using cv::Scalar;
using cv::Point;
void myEllipse(Mat img,double angle){
     // Point clasından daha önce bahsetmiştim.
     // Genelde kordinat verileri için kullanılır 2 veya 3 boyut olarak özelleştirelebilir.
     // cv::Point pt = cv::Point(10,8); 


     // Represents a 4-element vector. The type Scalar is widely used in OpenCV for passing pixel values.
     // we will use it extensively to represent BGR color values (3 parameters). It is not necessary to define the last argument if it is not going to be used.
     // we would be defining a BGR color such as: Blue = a, Green = b and Red = c
    //cv::Scalar(1,2,3);

    int thickness = 2;
    int lineType = 8;
    cv::ellipse(img,Point(w/2,w/2),Size(w/4,w/16),angle,0,360,Scalar(255,0,0),thickness,lineType);

}

void myFilledCircle(Mat img, Point center){
  circle(img,center,
  w/32,Scalar(0,0,255),
  cv::FILLED,cv::LINE_8);
  }

void myPolygon(Mat img){
  int lineType = cv::LINE_8;
  Point rookPoints[1][20];
   rookPoints[0][0]  = Point(    w/4,   7*w/8 );
   rookPoints[0][1]  = Point(  3*w/4,   7*w/8 );
   rookPoints[0][2]  = Point(  3*w/4,  13*w/16 );
   rookPoints[0][3]  = Point( 11*w/16, 13*w/16 );
   rookPoints[0][4]  = Point( 19*w/32,  3*w/8 );
   rookPoints[0][5]  = Point(  3*w/4,   3*w/8 );
   rookPoints[0][6]  = Point(  3*w/4,     w/8 );
   rookPoints[0][7]  = Point( 26*w/40,    w/8 );
   rookPoints[0][8]  = Point( 26*w/40,    w/4 );
   rookPoints[0][9]  = Point( 22*w/40,    w/4 );
   rookPoints[0][10] = Point( 22*w/40,    w/8 );
   rookPoints[0][11] = Point( 18*w/40,    w/8 );
   rookPoints[0][12] = Point( 18*w/40,    w/4 );
   rookPoints[0][13] = Point( 14*w/40,    w/4 );
   rookPoints[0][14] = Point( 14*w/40,    w/8 );
   rookPoints[0][15] = Point(    w/4,     w/8 );
   rookPoints[0][16] = Point(    w/4,   3*w/8 );
   rookPoints[0][17] = Point( 13*w/32,  3*w/8 );
   rookPoints[0][18] = Point(  5*w/16, 13*w/16 );
   rookPoints[0][19] = Point(    w/4,  13*w/16 );

   const Point* ppt[1] = {rookPoints[0]};
   int npt[] = {20};
   cv::fillPoly(img,ppt,npt,1,Scalar(255,255,255),lineType);


}

 void myLine(Mat img, Point start, Point end){
  int thickness = 2;
  int lineType = cv::LINE_8;
  cv::line(img,start,end,Scalar(0,0,0),thickness,lineType);
}