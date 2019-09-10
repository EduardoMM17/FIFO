cmake_minimum_required(VERSION 3.14)
project(Cola)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cola main.cpp FIFO.cpp FIFO.h)