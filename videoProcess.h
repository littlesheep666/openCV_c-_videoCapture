#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
// bool* running;
class VideoProcess{
private:
    cv::VideoCapture cap;
    uint8_t id = 0;
    cv::Mat current_frame;
    cv::Mat frame;
    cv::Mat gray;
    int i=0;
public:
    VideoProcess(void);
    ~VideoProcess();
    // RawFrame next_frame(void);
    bool running = true;
};

