cmake_minimum_required(VERSION 4.2)
project(DSA_task)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA_task main.cpp
        Node.h
        LinkedList.h
        LinkedList.cpp
        stack.cpp
        stack.h
        Queue.cpp
        Queue.h)
