#include "include.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec {3, 2, 5, 1, 0, 8, 7};
    printVector(vec);
    quickSort(vec, 0, vec.size()-1);
    printVector(vec);

    
    return 0;
}