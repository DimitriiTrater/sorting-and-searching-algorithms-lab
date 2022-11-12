#include <iostream>
#include <vector>
#include "Bubble Sort/bubble_sort.h"
#include "Standard Tools/std_tools.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec(5);
    fillVectorRange(0, 5, vec);
    printVector(vec);
    bubbleSort(vec);
    printVector(vec);
    return 0;
}