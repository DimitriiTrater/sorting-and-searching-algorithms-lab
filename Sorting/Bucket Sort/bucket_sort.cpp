#include <vector>
#include <algorithm>

void bucketSort(std::vector<int>& vec)
{
    int max = *max_element(vec.begin(), vec.end());
    int len = vec.size();
    
    std::vector<int> bucket(len);

    for (int i = 0; i <= max; i++)
        bucket[i] = 0;

    for (int i = 0; i < len; i++)
        bucket[vec[i]]++;
    
    for (int i = 0, j = 0; i <= max; i++)
    {
        while (bucket[i] > 0)
        {
            vec[j++] = i;
            bucket[i]--;
        }   
    }
}