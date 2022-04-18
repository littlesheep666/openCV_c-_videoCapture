#include <opencv2/opencv.hpp>
#include "videoProcess.h"

int main() {
    std::cout<<"start!"<< std::endl;
    VideoProcess video_process;
//    cv::Mat img_encode = cv::imread("../test1_result.jpg" );//读取图片
//    cv::imshow("img", img_encode);                     //显示图片
//    cv::waitKey(-1);                            //等待按键 不然会一闪而过

//    std::string str;
//    std::vector<unsigned char> buff;
//    cv::imencode(".jpg", img_encode, buff);
//    str.resize(buff.size());
//    memcpy(&str[0], buff.data(), buff.size());
//    std::cout<<"str:"<<str;


//    json j;
//    cv::Mat image = cv::imread("D:\\4.jpg");  //存放自己图像的路径
//    //imshow("显示图像", image);
//    std::vector<unsigned char> data_encode;
//    int res = imencode(".jpg", image, data_encode);
//    std::string str_encode(data_encode.begin(), data_encode.end());
//    const char* c = str_encode.c_str();
//    JSONCGIHandler::JSONGenerator jsonGenerator;
//    jsonGenerator.add("mat",base64_encode(c, str_encode.size()));
//    j["mat"] = base64_encode(c, str_encode.size());


    return 0;
}
