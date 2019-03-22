#include <stdio.h>
#include "main.h"

int release_resources(int customer_num, int release[])
{
    int difference[NUMBER_OF_RESOURCES];
	/* Release resources should release from allocation array and move those resources to available array*/
    for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
    {
        /* Calculate the difference of allocation and release */
        difference[i] = allocation[customer_num][i] - release[i];

        /* Check if able to release those resources*/
        if(difference[i] < 0)
        {
            printf("Not able to release resources\n");
            return -1;
        }

        /* Calc new allocation after determining we can release*/
        allocation[customer_num][i] -= release[i];

        /* Add the difference to available */
        available[i] += release[i];
    }
    return 1;
}
