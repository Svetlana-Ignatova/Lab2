cmake_minimum_required(VERSION 3.17)
project(s_lab2)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(gtest/googletest)
add_executable(s_lab2 main.cpp DinamicArray.h LinkedList.h Sequence.h ArraySequence.h LinkedListSequence.h menu.h Complex.h Matrix.h SquareMatrix.h menu.cpp tests.cpp)
include_directories(gtest/googletest/googletest/include)
target_link_libraries(s_lab2 gtest gtest_main)