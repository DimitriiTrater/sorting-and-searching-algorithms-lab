#include <iostream>
#include <vector>
#include <random>
#include <chrono>


void printVector(std::vector<int> vec)
{
    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << "\t";
    }
    std::cout << "\n";
}


void fillVectorRand(std::vector<int>& vec)
{
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine eng(seed);

    for (size_t i = 0; i < vec.size(); ++i)
    {
        vec[i] = eng();
    }

}


void fillVectorRange(int min, int max, std::vector<int>& vec)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(min, max);
    for (size_t i = 0; i < vec.size(); i++)
    {
        vec[i] = dist(mt);
    }
}