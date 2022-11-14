cmake_minimum_required(VERSION 3.23)

project(sorting-lab)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    sorting-lab "main.cpp"

    "Standard Tools/std_tools.cpp" "Standard Tools/std_tools.h"

    "Bubble Sort/bubble_sort.cpp" "Bubble Sort/bubble_sort.h"

    "Selection Sort/selection_sort.cpp" "Selection Sort/selection_sort.h"

)