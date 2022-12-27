#include <vector>
#include <iostream>

bool isSorted(std::vector<int> vec)
{
    int n = vec.size();
    while (--n > 0)
    {
        if (vec[n] < vec[n-1])
            return false;
    }
    return true;
    
}


void shuffle(std::vector<int> vec)
{
    int n = vec.size();

    for (int i = 0; i < n; i++)
        std::swap(vec[i], vec[rand() % n]);
}

void bogosort(std::vector<int> vec)
{
    int n = vec.size();
    while (!isSorted(vec))
    {
        shuffle(vec);
    }
    
    
}