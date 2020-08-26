#include "Generate.h"

#include <iostream>

#include <stdlib.h>
#include <time.h> //rand
#include <stdio.h>
#include <algorithm>    // std::sort


Generate::Generate()
{

}


Generate::~Generate()
{
}


std::vector <int> Generate::MonRising(size_t size)
{
    std::vector <int> list(size);
    int tempRand = 0;
    for (int i = 0; i < size; i++)
    {
        tempRand += rand() % 100;
        list[i] = tempRand;
    }
    return list;
}

std::vector <int> Generate::MonLowering(size_t size)
{
    std::vector <int> list(size);
    int tempRand = 0;
    for (int i = 0; i < size; i++)
    {
        tempRand += rand() % 100;
        list[i] = tempRand;
    }
    std::sort(list.begin(), list.end(), compare());
    return list;
}

std::vector <int> Generate::Static(size_t size)
{
    std::vector <int> list(size);
    int tempRand = rand() % 100;
    for (int i = 0; i < size; i++)
    {
        list[i] = tempRand;
    }
    return list;
}

std::vector<int> Generate::random(size_t size)
{

    std::vector <int> list(size);
    for (int i = 0; i < size; i++)
    {
        list[i] = rand() % 100;;
    }
    return list;
}

void Generate::printList(std::vector <int> list)
{
    for (auto i : list)
    {
        std::cout << i << " ";
    }
}