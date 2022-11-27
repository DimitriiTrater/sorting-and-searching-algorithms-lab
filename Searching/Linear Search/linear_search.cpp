#include <vector>

int linearSearch(std::vector<int>& vec, int key)
{
    for (int i = 0; i < vec.size(); i++)
        if (vec[i] == key)
            return i;
    return -1;
}