#include "include.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec = {1, 2, 3};
    
    printVector(vec);
    
    std::cout << linearSearch(vec, 3);

    return 0;
}