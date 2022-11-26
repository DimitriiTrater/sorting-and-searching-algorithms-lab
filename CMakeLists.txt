cmake_minimum_required(VERSION 3.23)

project(sorting-lab VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    sorting-lab "main.cpp"

    "Standard Tools/std_tools.cpp" "Standard Tools/std_tools.h"

    "Bubble Sort/bubble_sort.cpp" "Bubble Sort/bubble_sort.h"

    "Selection Sort/selection_sort.cpp" "Selection Sort/selection_sort.h"

    "Insertion Sort/insertion_sort.cpp" "Insertion Sort/insertion_sort.h" 

    "Bucket Sort/bucket_sort.cpp" "Bucket Sort/bucket_sort.h"

    "Quick Sort/quick_sort.cpp" "Quick Sort/quick_sort.h"

    "Bogosort/bogosort.cpp" "Bogosort/bogosort.h" 

    "Merge Sort/merge_sort.cpp" "Merge Sort/merge_sort.h" 


    )