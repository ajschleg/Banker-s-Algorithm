#include <stdio.h>
#include <pthread.h>
#include "main.h"

int request_resources(int customer_num, int request[])
{
	/* Mutex locks*/
	printf("Locked. ID: %d Trying to request resources...\n", customer_num);



	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
		printf("ID: %d Checking if %d <= %d\n", customer_num, request[i], work[i]);
		if (request[i] > work[i])
		{
			printf("Denied\n");
			/*not enough resources, exit*/
			return -1;
		}
	}

	/*Check if last element*/
	printf("ID: %d GRANTED\n", customer_num);
	/*If last element calculate new work and set status = 1
	 * new work = work + allocation for ID_
	 * */

	printf("new work = [");
	for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
	{
		work[j] = work[j] + allocation[customer_num][j];
		printf("%d, ", work[j]);
	}
	printf("] after ID: %d\n", customer_num);

	/*else go to next and check*/

	return 1;
}
