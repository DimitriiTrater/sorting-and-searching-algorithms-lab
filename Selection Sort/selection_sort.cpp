#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& vec)
{   
    int min_num = vec[0];
    
    for(size_t j = 0; j < vec.size(); j++)
    {
        int min_index = j;
        
        for (size_t i = j; i < vec.size(); i++)
        {       
            if (vec[i] < vec[min_index])
            {
                min_index = i;
            }
        }

        if (min_index != j)
        {
            std::swap(vec[min_index], vec[j]);
        }
    }
}