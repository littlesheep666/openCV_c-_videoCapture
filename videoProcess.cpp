#include <string>
#include "videoProcess.h"

VideoProcess::VideoProcess(void) : cap(0) {
    std::cout<<"id:"<<id<<std::endl;
    if (!cap.isOpened()) {
        std::cout << "Cannot open camera\n";
    }

    // this->running = true;
    cv::namedWindow("myWindow", cv::WINDOW_AUTOSIZE);
    while (true) {
        i++;
        // Extraction of videos
        bool ret = cap.read(frame); // or cap >> frame;
        if (!ret) {
            std::cout << "Can't receive frame (stream end?). Exiting ...\n";
            break;
        }

        // Colour to grey scale
        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        // Show images
        // cv::imshow("live", frame);
        cv::imshow("live", gray);
        std::string outputDir = "/Users/littlesheep/Downloads/keyframePic/";
        std::string filePath = outputDir + std::to_string(i) + ".jpg";
        cv::imwrite(filePath,gray);
        // quit
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }
//     return 0;
}

VideoProcess::~VideoProcess() {
    // `false` any blocked threads should be allowed to quit
    running = false;
}