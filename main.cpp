#include "include.h"

int main(int argc, char * argv[])
{
    std::vector<int> vec = {1, 2, 3};
    std::cout << binarySearch(vec, 0, vec.size() - 1, 3) ;

    return 0;
}