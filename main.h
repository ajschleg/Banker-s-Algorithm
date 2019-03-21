#ifndef MAIN_H
#define MAIN_H

#include <pthread.h>

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
/* The work work after each successful process*/
int work[NUMBER_OF_RESOURCES];

typedef struct {
  int invoked;  // bool to tell if request has been invoked
  int resources[NUMBER_OF_RESOURCES];
} request_t;

typedef struct {
  int invoked;  // bool to tell if release has been invoked
  int resources[NUMBER_OF_RESOURCES];
} release_t;

typedef struct {
  int customer_num;
  request_t request;
  release_t release;
} thread_params_t;

/* Keep track of each process status, finished or not*/
thread_params_t* param_ptrs[NUMBER_OF_CUSTOMERS];
// thread_params_t params[NUMBER_OF_CUSTOMERS];

pthread_mutex_t mutex;

/*
These two functions should return 0 if successful (the request has been
granted) and –1 if unsuccessful. Multiple threads (customers) will concurrently
access shared data through these two functions. Therefore, access must be
controlled through mutex locks to prevent race conditions.
*/
int request_resources(int customer_num, int request[]);
int release_resources(int customer_num, int release[]);

/*Thread functions*/
void* thread_runner(void* param);

void print2dArray(int arr[NUMBER_OF_CUSTOMERS][NUMBER_OF_RESOURCES]);
void print1dArray(int arr[]);
void printAll(void);

void initCustomerArrays(void);

#endif /* MAIN_H */