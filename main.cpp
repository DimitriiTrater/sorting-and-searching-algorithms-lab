#include <iostream>
#include <vector>
#include "Selection Sort/selection_sort.h"
#include "Standard Tools/std_tools.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec {3, 2, 5, 1};
    printVector(vec);
    selectionSort(vec);
    printVector(vec);
    return 0;
}