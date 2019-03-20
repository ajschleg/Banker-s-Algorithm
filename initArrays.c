//
// Created by flynn on 3/19/19.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "main.h"

void init2dArray(int arr[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES])
{

    /*Init array to random value between 0 and 10*/
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {

        for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
        {
            arr[i][j] = rand() % 10;
        }
    }
}