#include "include.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec = {1, 2, 3};
    printVector(vec);
    bucketSort(vec);
    printVector(vec);

    
    return 0;
}