#include <stdio.h>
#include <stdlib.h>

/* these may be any values >= 0 */
#define NUMBER_OF_CUSTOMERS 5
#define NUMBER_OF_RESOURCES 3
/* the available amount of each resource */
int available[NUMBER_OF_RESOURCES];
/*the maximum demand of each customer */
int maximum[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];
/* the amount currently allocated to each customer */
int allocation[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];
/* the remaining need of each customer */
int need[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES];

/*These two functions should return 0 if successful (the request has been
granted) and –1 if unsuccessful. Multiple threads (customers) will concurrently
access shared data through these two functions. Therefore, access must be
controlled through mutex locks to prevent race conditions. Both the Pthreads
and Windows API s provide mutex locks. The use of Pthreads mutex locks is
covered in Section 5.9.4; mutex locks for Windows systems are described in the
project entitled “Producer–Consumer Problem” at the end of Chapter 5.
*/
int request_resources(int customer num, int request[]);
int release_resources(int customer num, int release[]);

int main(int argc, char *argv[])
{
	return 0;
}