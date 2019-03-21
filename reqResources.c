#include <stdio.h>
#include <pthread.h>
#include "main.h"

int request_resources(int customer_num, int request[])
{
	/*Mutex locks*/
	pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
	printf("Trying to request resources...\n");

	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
	    printf("Checking if %d <= %d\n", request[i], work[i]);
		if(request[i] <= work[i])
		{
			/*Check if last element*/
			if(i+1 == NUMBER_OF_RESOURCES)
 			{
			    printf("REQ\n");
				/*If last element calculate new work and set status = 1
				 * new work = work + allocation for ID_*/
				//critical section
				pthread_mutex_lock(&mutex);
				printf("new work = [");
                for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
                {
                    work[j] = work[j] + allocation[customer_num][j];
                    printf("%d, ", work[j]);
                }
                printf("]\n");
                pthread_mutex_unlock(&mutex);
                //end critical section
			}
			/*Go to next and check*/
		}
		else
		{
		    printf("Denied\n");
			/*not enough resources, exit*/
			 break;
		}

	}
	return customer_num;
}
