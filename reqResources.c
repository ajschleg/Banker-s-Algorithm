#include <stdio.h>
#include "main.h"

int request_resources(int customer_num, int request[])
{
	printf("Trying to request resources...\n");

	for (int i = 0; i < NUMBER_OF_RESOURCES; ++i)
	{
		request[i] = finish[customer_num]->ID_;
		if(request[i] <= work[i])
		{
			/*Check if last element*/
			if(i == NUMBER_OF_RESOURCES)
 			{
				/*If last element calculate new work and set status = 1*/

			}
			/*Go to next and check*/
		}
		else
		{
			/*not enough resources, exit*/
			 break;
		}

	}
	return customer_num;
}
