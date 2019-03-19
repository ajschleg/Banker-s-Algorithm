//
// Created by Austin Schlegel on 2019-03-18.
//
#include <stdio.h>

#include "main.h"

void print2dArray(int arr[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES])
{
    printf("   ");
    for (int l = 0; l < NUMBER_OF_RESOURCES; ++l)
    {
        printf("R%d", l);
    }
    printf("\n");

    /*Print n x m Maximum*/
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {
        printf("P%d ", i);
        for (int k = 0; k < NUMBER_OF_RESOURCES; ++k)
            {
                printf("%d ", maximum[i][k]);
            }
        printf("\n");
    }

}

void print1dArray(int arr[])
{
    for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
