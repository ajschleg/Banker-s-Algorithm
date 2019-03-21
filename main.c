#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

#include "main.h"

int main(int argc, char *argv[])
{

	srand(time(0));
    if(argc < NUMBER_OF_RESOURCES+1)
	{
    	printf("Error\n");
	}

	/*init available array*/
    for (int i = 1; i < argc; ++i)
	{
		int temp;
		temp = atoi(argv[i]);
		available[i - 1] = temp;
	}

	/*Init arrays*/
    initArrays();

    printAll();

    /* Create n customer threads*/
	/* An array of threads to be joined upon */
	pthread_t customers[NUMBER_OF_CUSTOMERS]; /* the thread identifier */
	pthread_attr_t attr; /* set of thread attributes */

    /* get the default attributes */
    pthread_attr_init(&attr);

	for(int j = 0; j < NUMBER_OF_CUSTOMERS; j++)
	{
		/* create the threads */
		pthread_create(&customers[j], &attr, thread_runner, finish[j]);
	}

	for(int j = 0; j < NUMBER_OF_CUSTOMERS; j++)
	{
		/* wait for the thread to exit */
		pthread_join(customers[j], NULL);
	}

	printAll();

	return 0;
}

