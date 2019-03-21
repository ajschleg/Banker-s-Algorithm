#include <stdio.h>
#include <pthread.h>
#include "main.h"

int request_resources(int customer_num, int request[])
{

	printf("Customer # %d - Issuing request...\n", customer_num);

	/* Step 1: Check if request is within need */
	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
		// printf("ID: %d Checking if %d <= %d\n", customer_num, request[i], need[customer_num][i]);
		if (request[i] > need[customer_num][i])
		{
			printf("Request Denied: Exceeds customer's need\n");
			/*not enough resources, exit*/
			return -1;
		}
	}


	/* Step 2: Check if enough resources available to fill request */
	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
		// printf("ID: %d Checking if %d <= %d\n", customer_num, request[i], available[i]);
		if (request[i] > available[i])
		{
			printf("Request Denied: Exceeds available resources\n");
			/*not enough resources, exit*/
			return -1;
		}
	}

	/* Step 3: Simulate allocation of resources 
	 * 
	 * Available = Available - Request
	 * Allocation = Allocation + Request
	 * Need = Need - Request
	 */

	// Available = Available - Request
	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
		available[i] -= request[i];
	}

	// Allocation = Allocation + Request
	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
		allocation[customer_num][i] += request[i];
	}

	// Need = Need - Request
	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
		need[customer_num][i] -= request[i];
	}

	/* Step 4: Ensure the system will be left in safe state
	 * 
	 * If not, reset the state (reverse the simulated allocation)
	 * 
	 * For m resources and n customers,
	 * Let Work be length m and Finish be length n
	 */
	
	int work[NUMBER_OF_RESOURCES];
	int finish[NUMBER_OF_CUSTOMERS];

	/* I. Init Work = Available 
	 * 		Init Finish = 'false' for all customers
	 */
	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
		work[i] = available[i];
	}
	for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
	{
		finish[i] = 0;
	}

	/* II. Find an index i such that both
	 * 			a.) Finish[i] == false
	 * 			b.) Need[sub i] <= Work
	 * 
	 * 		If found, go to step III
	 * 		If no such i exists, go to step IV
	 */
	int unsafe = 0;

	for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
	{
		if (!finish[i])
		{
			// check that need is <= to work for all resources
			for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
			{
				if (need[i][j] > work[j])
				{
					unsafe = 1;	// should loop back and recheck?
					break;
				}
			}
			// if so, place in safe sequence
			if (!unsafe)
			{
				for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
				{
					work[j] += allocation[i][j];
				}
				printf("setting finish[%d] = 1\n", i);
				finish[i] = 1;
			}
			else
			{
				// Do something else? or just leave finish = 0 ?
				// Should loop over customers again?
			}


		}
	}

	/* IV. If Finish[i] == 'true' for all i,
	 *
	 *			Then the system is in safe state.
	 * 
	 */

	// Confirm that all finish[i] are true before leaving allocation
	for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
	{
		if (!finish[i])
		{
			// System will not be safe, reset state
			// Available = Available + Request
			for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
			{
				available[i] += request[i];
			}

			// Allocation = Allocation - Request
			for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
			{
				allocation[customer_num][i] -= request[i];
			}

			// Need = Need + Request
			for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
			{
				need[customer_num][i] += request[i];
			}

			// Request not granted, return denied
			printf("Request Denied: System would be left in unsafe state\n");
			return -1;
		}
	}

	// If made it here, resources were allocated
	// Request granted, return success
	printf("Customer # %d - Request granted.\n", customer_num);
	return 0;
}
