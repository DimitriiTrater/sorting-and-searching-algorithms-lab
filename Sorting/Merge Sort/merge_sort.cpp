#include <vector>

void merge(std::vector<int>& vec, int left, int middle, int right)
{
    int first_size = middle - left + 1; 
    int second_size = right - middle;

    std::vector<int> Left(first_size);
    std::vector<int> Right(second_size);

    for (int i = 0; i < first_size; i++)
        Left[i] = vec[left + i];

    for (int j = 0; j < second_size; j++)
        Right[j] = vec[middle + 1 + j];
    
    int i = 0;
    int j = 0;
    int init_index = left;
    
    while (i < first_size && j < second_size)
    {
        if (Left[i] <= Right[j]) 
        {
            vec[init_index] = Left[i];
            i++;
        } 
        else {
            vec[init_index] = Right[j];
            j++;
        }
        init_index++;
    }

    while (i < first_size)
    {
        vec[init_index] = Left[i];
        i++;
        init_index++;
    }
    
    while (j < second_size)
    {
        vec[init_index] = Right[j];
        j++;
        init_index++;
    }

}


void mergeSort(std::vector<int>& vec, int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergeSort(vec, left, middle);
        mergeSort(vec, middle + 1, right);

        merge(vec, left, middle, right);
    }
}