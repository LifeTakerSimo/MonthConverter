cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp monthconverter.cpp illegalmonthexception.h illegalmonthexception.cpp monthconverter.h Base.cpp Base.h)
