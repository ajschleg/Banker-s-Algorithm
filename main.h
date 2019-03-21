#ifndef MAIN_H
#define MAIN_H

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


struct thread
{
    int ID_;
    int status_;
};

/* Keep track of each process status, finished or not*/
struct thread* finish[NUMBER_OF_CUSTOMERS];
struct thread structthread[NUMBER_OF_CUSTOMERS];


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

void initArrays(void);

#endif /* MAIN_H */