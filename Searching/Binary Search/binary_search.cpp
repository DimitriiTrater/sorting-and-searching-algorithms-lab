#include <vector>

int binarySearch(std::vector<int>& vec, int left, int right, int key)
{
    if (right >= left)
    {
        int middle = left + (right - left) / 2;

        if (vec[middle] == key)
            return middle;
        

        if (vec[middle] > key)
            return binarySearch(vec, left, middle - 1, key);
        
        return binarySearch(vec, middle + 1, right, key);

    }
    return -1;
}