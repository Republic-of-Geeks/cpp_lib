#include "common.h"

using namespace cv;
using namespace std;
using namespace geek;

int main()
{
    geekCamera Camera0;
    geekImage Image;
    Camera0.initInfosGet("/dev/video0",V4L2,FPS_120,EXP_6,false,MJPG,WIDTH_320,HEIGHT_240,true);
    Camera0.Init();
    Camera0.Capture();
    while(1)
    {
        Mat Img = Camera0.Get();
        Image.Add(Img);
        Image.Show();
        waitKey(1);
    }
    return 0;
}