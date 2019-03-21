#include <stdio.h>
#include <pthread.h>
#include "main.h"

int request_resources(int customer_num, int request[])
{

	printf("Locked. ID: %d - Issuing request...\n", customer_num);


	/* Check if enough resources available to fill request */
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

	/* If we got here, there are enough resources.
	 * Now, we need to check if granting the request
	 * will leave the system in a safe state
	 */
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
