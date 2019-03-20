#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

#include "main.h"

int main(int argc, char *argv[])
{
	srand(time(0));

	// printf("%d\n", argc);

    if(argc < NUMBER_OF_RESOURCES+1)
	{
    	printf("Error, too few arguments\n");
		exit(EXIT_FAILURE);
	}

	// TODO: Validate to make sure argv values are positive (and within certain range?)

	/* init available array */
    for (int i = 1; i < argc; ++i)
	{
		int temp;
		temp = atoi(argv[i]);
		available[i - 1] = temp;
	}

	// init MAXIMUM with random numbers less than those in AVAILABLE (and maybe not too small though)
	int a, b;
	for (int j = 0; j < NUMBER_OF_RESOURCES; ++j)
    {
		b = available[j] - 1;
		a = 1;
        for (int i = 0; i < NUMBER_OF_CUSTOMERS; ++i)
        {
            maximum[i][j] = rand() % (b - a + 1) + a;
			need[i][j] = maximum[i][j];
        }
    }

	// ALLOCATION is the currently allocated resources
	// Should start at 0 and fluctuate as requests and releases are issued
    init2dArray(allocation, 0, 0);

	// NEED should always be equal to (MAX - ALLOCATION)?
	// I think it's just the remaining amount that each is currently able to request
	// Since allocation is initialized to 0, it should just equal MAX, so we'll allocate above with MAX

    printAll();

    /* Create n customer threads*/
	/* An array of threads to be joined upon */
	pthread_t customer[NUMBER_OF_CUSTOMERS]; /* the thread identifier */
	pthread_attr_t attr; /* set of thread attributes */

    /* get the default attributes */
    pthread_attr_init(&attr);

	for(int j = 0; j < NUMBER_OF_CUSTOMERS; j++)
	{
		/* create the threads */
		pthread_create(&customer[j], &attr, thread_runner, argv[1]);
	}
	for(int j = 0; j < NUMBER_OF_CUSTOMERS; j++)
	{
		/* wait for the thread to exit */
		pthread_join(customer[j], NULL);
	}

	return 0;
}

