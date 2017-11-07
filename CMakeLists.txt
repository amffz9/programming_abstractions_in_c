cmake_minimum_required(VERSION 3.8)
project(programming_abstractions_in_c)

set(CMAKE_CXX_STANDARD 11)

set(EXERCISE_ONE
        chapter2/exercise1_weekdayenumeration.c)
set(EXERCISE_TWO
        chapter2/exercise2_cylinder.c)

add_executable(exercise_one ${EXERCISE_ONE})
add_executable(exercise_two ${EXERCISE_TWO})