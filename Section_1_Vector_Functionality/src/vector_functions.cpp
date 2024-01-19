#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> v)
{
    int counter = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 5 == 0) {
            counter++;
        }
    }
    return counter;
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}