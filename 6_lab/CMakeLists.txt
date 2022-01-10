cmake_minimum_required(VERSION 3.20)
project(lab6)

set(CMAKE_CXX_STANDARD 23)


add_executable(lab6 main.cpp
        main.cpp tqueueitem.h tqueue.h rectangle.cpp rectangle.h point.cpp point.h titerator.h vector.h tallocationblock.cpp tallocationblock.h
        )
