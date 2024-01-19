#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> v)
{
    return std::count_if(v.begin(), v.end(), [](int i){ return i % 5 == 0; });
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}