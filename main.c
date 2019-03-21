#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

#include "main.h"

int main(int argc, char *argv[])
{
	pthread_mutex_init(&mutex, NULL);

	srand(time(0));
    if(argc < NUMBER_OF_RESOURCES+1)
	{
    	printf("Error\n");
	}

	/* Init available array */
    for (int i = 1; i < argc; ++i)
	{
		int temp;
		temp = atoi(argv[i]);
		available[i - 1] = temp;
	}

	/* Init customer arrays */
    initCustomerArrays();

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
		param_ptrs[j] = (thread_params_t *) malloc(sizeof(thread_params_t));
		param_ptrs[j]->customer_num = j;
		param_ptrs[j]->request.invoked = 0;
		param_ptrs[j]->release.invoked = 0;
		pthread_create(&customers[j], &attr, thread_runner, param_ptrs[j]);
	}

	for(int j = 0; j < NUMBER_OF_CUSTOMERS; j++)
	{
		/* wait for the thread to exit */
		pthread_join(customers[j], NULL);
	}

	// Don't forget to free param_ptrs!

	printAll();

	return 0;
}

