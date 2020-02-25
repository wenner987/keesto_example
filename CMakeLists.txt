cmake_minimum_required(VERSION 3.10)
project(keesto_example)

set(CMAKE_CXX_STANDARD 14)

add_library(keesto_example SHARED src/entry.cpp src/handler.cpp src/handler.h)

target_link_libraries(keesto_example /root/workspace/libkeesto.a)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)