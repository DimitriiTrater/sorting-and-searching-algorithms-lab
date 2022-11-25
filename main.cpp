#include "include.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec {3, 2};
    printVector(vec);
    bogosort(vec);
    printVector(vec);

    
    return 0;
}