#include <stdio.h>
#include "main.h"

int release_resources(int customer_num, int release[])
{
    int difference[NUMBER_OF_RESOURCES];
	/* Check if valid release */
    for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
    {
        /* Calculate the difference of allocation and release */
        difference[i] = allocation[customer_num][i] - release[i];

        /* Check if able to release those resources*/
        if(difference[i] < 0)
        {
            printf("Not able to release\n");
            return -1;
        }
    }

    // Make it so
    for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
    {
        allocation[customer_num][i] -= release[i];
        available[i] += release[i];
    }

    return 0;
}
