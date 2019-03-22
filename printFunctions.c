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

    /*Print n x m arr*/
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {
        printf("P%d ", i);
        for (int k = 0; k < NUMBER_OF_RESOURCES; ++k)
            {
                printf("%d ", arr[i][k]);
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

void printAll()
{
    printf("Maximum\n");
    print2dArray(maximum);
    printf("\n");

    printf("Allocation\n");
    print2dArray(allocation);
    printf("\n");

    printf("Need\n");
    print2dArray(need);
    printf("\n");

    printf("Available\n");
    print1dArray(available);
    printf("\n");
}

