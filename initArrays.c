//
// Created by flynn on 3/19/19.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "main.h"

void initCustomerArrays(void)
{

    /* Init maximum array to random values less than those in available array */
	int a, b;
	for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
    {
		b = available[j] - 1;
		a = 1;
        for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
        {
            maximum[i][j] = rand() % (b - a + 1) + a;
			need[i][j] = maximum[i][j];
        }
    }

    /* Init allocation array with 0s (no resources currently allocated)  */
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {
        for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
        {
           allocation[i][j] = 0;
        }
    }

    /* Need = Maximum - Allocation */
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {
        for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
        {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }

    /*Init Work and finish
     * 1. Let Work and Finish be vectors of length m and n, respectively. Initialize
        Work = Available and Finish[i] = false for i = 0, 1, ..., n − 1.*/
    // for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
    // {
    //     work[i] = available[i];
    // }

    /* Finish will be init to 0.
     * 0 - false
     * 1 - True
     * */
    // for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    // {
    //     structthread[i].ID_ = i;
    //     structthread[i].status_ = 0;

    //     finish[i] = &structthread[i];
    // }
}