#include <vector>

// iterative
int interpolationSearch(std::vector<int> vec, int key)
{
    int middle;
    int left = 0;
    int right = (vec.size() - 1);
    
    while (left <= right && key >= vec[left] && key <= vec[right])
    {
        if (left == right)
        {
            if (vec[left] == key) return left;
            return -1;
        }

        int position = left +(((double)(right - left) / (vec[right] - vec[left])) * (key - vec[left]));

        if (vec[position] == key) return position;

        if (vec[position] < key)
            left = position + 1;

        else 
            right = position - 1;       
    }
    return -1;
}

// recursive
int interpolationSearch(std::vector<int> vec, int left, int right, int key)
{
    int position;
    if (left <= right && key >= vec[left] && key <= vec[right])
    {
        position = left + (((double)(right - left) / (vec[right] - vec[left])) * (key - vec[left]));
    
        if (vec[position] == key) return position;
        
        if (vec[position < key]) return interpolationSearch(vec, position + 1, right, key);

        if (vec[position] > key) return interpolationSearch(vec, left, position - 1, key);
        
    }
    return -1;
}