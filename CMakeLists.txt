cmake_minimum_required(VERSION 3.0.0)
project(opencvTest VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(LIBSRC
 videoProcess.cpp base64.cpp base64.h)

add_executable(opencvTest ${LIBSRC}  main.cpp)

target_link_libraries(opencvTest ${OpenCV_LIBS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
