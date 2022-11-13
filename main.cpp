#include <iostream>
#include <vector>
#include "Bubble Sort/bubble_sort.h"
#include "Standard Tools/std_tools.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec {3, 2, 5, 1};
    printVector(vec);
    bubbleSort(vec);
    printVector(vec);
    return 0;
}