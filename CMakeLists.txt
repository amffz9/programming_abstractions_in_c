cmake_minimum_required(VERSION 3.8)
project(programming_abstractions_in_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        chapter2/exersice1_weekdayenumeration.c)

add_executable(programming_abstractions_in_c ${SOURCE_FILES})