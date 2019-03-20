//
// Created by flynn on 3/19/19.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "main.h"

void init2dArray(int arr[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES], int a, int b)
{

    /* Init array with random values in range [a:b] inclusive */
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {

        for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
        {
            arr[i][j] = rand() % (b - a + 1) + a;
        }
    }
}