#include <vector>

// iterative
int binarySearch(std::vector<int> vec, int key)
{
    int left = 0;
    int right = vec.size() - 1;
    int middle;
    
    while (right - left > 1)
    {
        int middle = (right + left) / 2;

        if (vec[middle]  < key)
        {
            left = middle + 1;
        }
        else {
            right = middle;
        }
    }

    if (vec[left] == key) 
        return left;
    
    if (vec[right] == key)
        return right;
    
    return -1;
}

// recursive
int binarySearch(std::vector<int> vec, int left, int right, int key)
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

