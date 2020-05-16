#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <iostream>
#include <stdio.h>

using namespace cv;
using namespace std;

int main(int, char**)
{
    Mat frame;
    VideoCapture capture0;
    VideoCapture capture1;
    VideoCapture capture2;
    int deviceID0 = -1;
    int deviceID1 = 0;
    int deviceID2 = 1;
    int apiID = CAP_ANY;

    capture0.open(deviceID0, apiID);
    capture1.open(deviceID1, apiID);
    capture2.open(deviceID2, apiID);

    if (!capture0.isOpened()) {
        cerr << "ERROR! Unable to open camera on -1\n";
    }

    if (!capture1.isOpened()) {
        cerr << "ERROR! Unable to open camera on 0\n";
    }

    if (!capture2.isOpened()) {
        cerr << "ERROR! Unable to open camera on 1\n";
    }

    if (!capture0.isOpened() || !capture1.isOpened() || !capture2.isOpened()) {
        return -1;
    }
    return 0;
}
