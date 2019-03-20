//
// Created by Austin Schlegel on 2019-03-18.
//
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#include "main.h"

void* thread_runner(void* param)
{
    int* customer_num = param;
    printf("In thread for customer #%d\n", *customer_num);
    
    int request[NUMBER_OF_RESOURCES];
    // randomize a request (not greater than need)
    for (int i = 0; i < NUMBER_OF_RESOURCES; ++i) {
        request[i] = rand() % (need[*customer_num][i]);
    }
    request_resources(*customer_num, request);
    pthread_exit(0);
}
