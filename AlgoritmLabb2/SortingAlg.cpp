#include "SortingAlg.h"
#include <iostream>

void insertionSort(std::vector<int> list)
{
    for (auto i : list)
    {
        auto j = i;
        while (j > 0 && j - 1 > j)
        {
            std::swap(list[j], list[j - 1]);
            j = j - 1;
        }
    }
}


void selectionSort(std::vector<int> list)
{
    //size_t run = list.size();
    int currentMini = 0;
    size_t listSize = list.size();
    int movingStart = 0;

    for (int i = 0; i < listSize; i++)
    {
        currentMini = i;
        for (int j = movingStart; j < listSize; j++)
        {
            if (j > 0 && list[j] < list[j - 1])
            {
                currentMini = j;
            }
        }
        std::swap(list[i], list[currentMini]);
        movingStart++;
    }
}



void quicksortsuper(int* front, int* back)
{
    if (back != front)
    {
        int* piviot = back;
        int* left = front;
        int* right = back;
    
            std::cout << *piviot << std::endl;
            /*
            for (int* write = front; write != back+1; write++)
            {
                std::cout << *write << " ";
            }
            std::cout << std::endl;
     */       
        while (left <= right)
        {
            if (*left >= *piviot)
            {
                //std::cout << "inne i först if " << std::endl;
                while (left != right && *right >= *piviot)
                {
                    right--;
                }
                std::swap(right, left);
            }
            left++;
        }
        std::swap(right, piviot);

      /*
        for (int* write = front; write != back+1; write++)
        {
            std::cout << *write << " ";
        }
        std::cout << std::endl << std::endl;
        */


        //std::cout << "into the matrix" << std::endl;
        if (right != front)
        {
            //quicksortsuper(front, right-1);
            //quicksortsuper(right + 1, back);
        }
        //tror felet är att den fortsätter kalla vid 2 element om och om igen. Blir aldirg endast 1.


        for (int* write = front; write != back + 1; write++)
        {
            std::cout << *write << " ";
        }
        //std::cout << std::endl << *right << std::endl;
        std::cout << std::endl;
    }
}