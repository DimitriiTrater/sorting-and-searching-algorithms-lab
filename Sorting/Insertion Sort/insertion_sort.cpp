#include <vector>

void insertionSort(std::vector<int>& vec)
{
    int i, j;
    for (i = 1; i < vec.size(); i++)
    {
        int num = vec[i];
        for (j = i - 1; j >= 0 && vec[j] > num; j--) 
        {
            vec[j+1] = vec[j];
        }
        vec[j + 1] = num;
    }
}