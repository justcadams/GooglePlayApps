cmake_minimum_required(VERSION 3.14)
project(GooglePlayApps)

set(CMAKE_CXX_STANDARD 17)

#add_executable(GooglePlayApps applications.h main.cpp)

add_executable(QueuesAndStacks stack.h queue.h applications.h mainsq.cpp)