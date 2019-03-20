//
// Created by flynn on 3/19/19.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "main.h"

void initArrays(void)
{

    /*Init maximum array to random value between 0 and 10*/
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {

        for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
        {
            maximum[i][j] = rand() % 10;
        }
    }
    /*Init allocation[i][j] to random value less than maximum[i][j]*/
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {

        for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
        {
            int temp;
            while(1)
            {
                temp = rand() % 10;
                if(temp > maximum[i][j])
                {
                    continue;
                }
                else
                {
                    allocation[i][j] = temp;
                    break;
                }
            }
        }
    }

    /*Calculate the need*/
    for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
    {
        for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
        {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }
}