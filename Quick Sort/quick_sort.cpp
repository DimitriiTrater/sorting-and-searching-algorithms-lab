#include <vector>

void quickSort(std::vector<int>& vec, int begin, int end)
{
    int i = begin;
    int j = end;
    int pivot = vec[(i + j) / 2];
    int t;

    while (i <= j) 
    {
        while (vec[i] < pivot)
            i++;
        while (vec[j] > pivot)
            j--;
        
        if (i <= j)
        {
            t = vec[i];
            vec[i] = vec[j];
            vec[j] = t;
            i++;
            j--;
        }
    }
    if (j > begin)
        quickSort(vec, begin, j);
    if (i < end)
        quickSort(vec, i, end);

}