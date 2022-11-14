#include <iostream>
#include <vector>
#include "Insertion Sort/insertion_sort.h"
#include "Standard Tools/std_tools.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec {3, 2, 5, 1, 0, 8, 7};
    printVector(vec);
    insertionSort(vec);
    printVector(vec);
    return 0;
}