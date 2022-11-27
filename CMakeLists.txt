cmake_minimum_required(VERSION 3.23)

project(sorting-lab VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    sorting-lab "main.cpp"

    "Standard Tools/std_tools.cpp" "Standard Tools/std_tools.h"

    # Sorting algorithms
    "Sorting/Bubble Sort/bubble_sort.cpp" "Sorting/Bubble Sort/bubble_sort.h"

    "Sorting/Selection Sort/selection_sort.cpp" "Sorting/Selection Sort/selection_sort.h"

    "Sorting/Insertion Sort/insertion_sort.cpp" "Sorting/Insertion Sort/insertion_sort.h" 

    "Sorting/Bucket Sort/bucket_sort.cpp" "Sorting/Bucket Sort/bucket_sort.h"

    "Sorting/Quick Sort/quick_sort.cpp" "Sorting/Quick Sort/quick_sort.h"

    "Sorting/Merge Sort/merge_sort.cpp" "Sorting/Merge Sort/merge_sort.h" 

    "Sorting/Bogosort/bogosort.cpp" "Sorting/Bogosort/bogosort.h" 

    # Searching algorithms
    "Searching/Linear Search/linear_search.cpp" "Searching/Linear Search/linear_search.h"

    "Searching/Binary Search/binary_search.cpp" "Searching/Binary Search/binary_search.h"

    "Searching/Interpolation Search/interpolation_search.cpp" "Searching/Interpolation Search/interpolation_search.h"
)