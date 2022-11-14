#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& vec)
{
    int n = vec.size();
    while (n--) 
    {
        bool swapped = false;
        for (std::size_t i = 0; i < n; i++)
        {
            if (vec[i] > vec[i + 1])
            {
                std::swap(vec[i], vec[i + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}