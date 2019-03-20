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
    printf("In thread for customer #%d\nMy thread id is: %lu\n", *customer_num, pthread_self());
    
    // PROCEDURE (for resource request)
    // 1. Request access to the mutex lock

    // 2. Perform Resource-Request Algorithm
        
        // a. if not exceeding claim (need), proceed to b, else denied

        // b. if not exceeding availability, proceed to c, else denied

        // c. simulate the request and perform the Safety Algorithm

            /* Safety Algorithm steps...

            */

            // If a safe sequence is found, grant the request, else denied

    // 3. Release hold on the mutex lock




    // For resource release...
    // May need mutex lock still, but no need for request algorithm


    int request[NUMBER_OF_RESOURCES];
    // randomize a request (not greater than need)
    for (int i = 0; i < NUMBER_OF_RESOURCES; ++i) {
        request[i] = rand() % (need[*customer_num][i]);
    }
    request_resources(*customer_num, request);
    pthread_exit(0);
}
