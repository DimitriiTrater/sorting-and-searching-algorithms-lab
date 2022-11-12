#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& vec)
{
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (std::size_t i = 0; i < vec.size(); i++)
        {
            if (vec[i] > vec[i + 1])
            {
                std::swap(vec[i], vec[i + 1]);
                swapped = true;
            }
        }
    }
}