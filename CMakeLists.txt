cmake_minimum_required(VERSION 3.14)
project(GooglePlayApps)

set(CMAKE_CXX_STANDARD 17)

#add_executable(GooglePlayApps applications.h main.cpp)

#add_executable(QueuesAndStacks Algorithms.h Stack.h Queue.h Applications.h mainsq.cpp)

add_executable(Algorithms Algorithms.h Algorithms.cpp AlgorithmsTest.cpp)

add_compile_options(g++ -Wall -Wextra -g)