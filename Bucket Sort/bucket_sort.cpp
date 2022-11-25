#include <vector>
#include <algorithm>

void bucketSort(std::vector<int>& first)
{

    int size = first.size();
    
    std::vector<int> bucket[size];
    
    for (std::size_t i = 0; i < first.size(); i++)
    {
        int bucket_i = size * first[i];
        bucket[bucket_i].push_back(first[i]);      
    }

    for (std::size_t i = 0; i < size; i++)
    {
        sort(bucket[i].begin(), bucket[i].end());
    }

    int index = 0;
    for (std::size_t i = 0; i < size; i++)
    {
        for (std::size_t j = 0; j < bucket[i].size(); j++)
        {
            first[index++] = bucket[i][j];
        }
        
    }

}