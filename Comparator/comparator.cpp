#include <random>
#include <chrono>
#include <iostream>
#include "../Searching/Linear Search/linear_search.h"
#include "../Searching/Binary Search/binary_search.h"
#include "../Searching/Interpolation Search/interpolation_search.h"


void quickSort_for(std::vector<int>& vec, int begin, int end)
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
        quickSort_for(vec, begin, j);
    if (i < end)
        quickSort_for(vec, i, end);
}



void fillArray(std::vector<int>& vec)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, RAND_MAX);
    for (size_t i = 0; i < 10'000; i++)
        vec[i] = dist(mt);

}

std::chrono::milliseconds linearTime(std::vector<int> vec)
{
    auto begin = std::chrono::steady_clock::now();

    for (int i = 0; i < 10'000; i++)
        linearSearch(vec, i);
    
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    return elapsed_ms;
}

std::chrono::milliseconds binaryTimeIter(std::vector<int> vec)
{
    auto begin = std::chrono::steady_clock::now();

    for (int i = 0; i < 10'000; i++)
        binarySearch(vec, i);
    
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    return elapsed_ms;

}

std::chrono::milliseconds binaryTimeRec(std::vector<int> vec)
{
    auto begin = std::chrono::steady_clock::now();

    for (int i = 0; i < 10'000; i++)
        binarySearch(vec, 0, 9'999, i);
    
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    return elapsed_ms;
}

std::chrono::milliseconds interpolationTimeIter(std::vector<int> vec)
{
    auto begin = std::chrono::steady_clock::now();

    for (int i = 0; i < 10'000; i++)
        interpolationSearch(vec, i);
    
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    return elapsed_ms;
}

std::chrono::milliseconds interpolationTimeRec(std::vector<int> vec)
{
    auto begin = std::chrono::steady_clock::now();

    for (int i = 0; i < 10'000; i++)
        interpolationSearch(vec, 0, 9'999, i);
    
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    return elapsed_ms;
}


void printCompareResult()
{
    std::vector<int> vec(10'000);
    fillArray(vec);
    quickSort_for(vec, 0, 9'999);
    std::cout << "Linear: " << linearTime(vec) << std::endl;
    std::cout << "Binary Iter: " << binaryTimeIter(vec) << std::endl;
    std::cout << "Binary Recurs: " << binaryTimeRec(vec) << std::endl;
    std::cout << "Interpolar Iter: " << interpolationTimeIter(vec) << std::endl;
    std::cout << "Interpolar Recurs: " << interpolationTimeRec(vec) << std::endl;
}