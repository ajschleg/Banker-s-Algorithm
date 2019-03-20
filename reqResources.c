#include "main.h"
#include <stdio.h>

int request_resources(int customer_num, int request[])
{
	// This was called by the customer thread (customer knows its number)
	printf("Customer #%d made request for [%d, %d, %d] resources\n", customer_num, request[0], request[1], request[2]);
	

	// if success, return 0 (resources granted?)
	// if not, return -1 (denied?)
	return customer_num;
}
