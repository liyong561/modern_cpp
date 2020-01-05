//
//  main.cpp
//  object_detection
//
//  Created by yong li on 2020/1/1.
//  Copyright © 2020年 yong li. All rights reserved.
//

#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;


//第一个例子：显示图像
void loadImage() {
    Mat  image, grayImage;
    /*        常用参数：
     IMREAD_UNCHANGED = -1,     return the loaded image as is (with alpha channel, otherwise it gets cropped).
     IMREAD_GRAYSCALE = 0,     always convert image to the single channel grayscale image (codec internal conversion).
     IMREAD_COLOR = 1,         always convert image to the 3 channel BGR color image.
     IMREAD_ANYDEPTH = 2,     return 16-bit/32-bit image when the input has the corresponding depth, otherwise convert it to 8-bit.
     IMREAD_ANYCOLOR = 4,     the image is read in any possible color format.
     */
    //读取图像
    image = imread("/Users/yongli/Pictures/flower.jpeg", IMREAD_UNCHANGED);
    //判断图像是否有效
    if (!image.data) {
        cout << "read image failed.\n" << endl;
        return;
    }
    
    //创建一个窗口,默认的创建窗口的namedWindow参数为WINDOW_AUTOSIZE...
    //WINDOW_AUTOSIZE:窗口大小会自动调整以适应所显示的图像，但是不能更改大小
    //WINDOW_NORMAL:用户可以改变窗口的大小
    //WINDOW_OPENGL: 窗口创建的时候会支持OpenGL
    namedWindow("SrcImage", WINDOW_AUTOSIZE);
    imshow("SrcImage", image);
    
    
    
    
    //彩色图转为灰度图
    cvtColor(image, grayImage, COLOR_RGB2GRAY, 0);
    namedWindow("GrayImage", WINDOW_AUTOSIZE);
    imshow("GrayImage", grayImage);
    
    cout << "Image Size: " << image.size << endl;
    cout << "Original Image Channels: " << image.channels() << endl;
    cout << "Gray Image Channels: " << grayImage.channels() << endl;
    waitKey(0);
}

int main()
{
    //the notice is very friendly
    loadImage();
}
