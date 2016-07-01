#include "sort1.h"

void sort1(int array[], int size)
{
    //  sort array using bubblesort algorithm
    for (int x = 0; x < size - 1; x++)
    {
        for (int y = 0; y < size - x - 1; y++)
            if (array[y] > array[y + 1])
            {
                int temp = array[y];
                array[y] = array[y + 1];
                array[y + 1] = temp;
            }
    } 
}