#include "include.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec = {12, 11, 13, 5, 6, 7};
    printVector(vec);
    int arr_size = vec.size();
    mergeSort(vec, 0, arr_size-1);
    printVector(vec);

    
    return 0;
}