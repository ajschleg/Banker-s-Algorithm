//
// Created by Austin Schlegel on 2019-03-18.
//
#include <pthread.h>
#include <stdio.h>

#include "main.h"

void* thread_runner(void* param)
{
    thread_params_t* params = (thread_params_t *)param;
    int request_result;
    int release_result;

    // while(!exit)
    while(should_run)
    {
        if (params->request.invoked)
        {
            pthread_mutex_lock(&mutex);

            /*If not finished then try to req resources*/
            request_result = request_resources(params->customer_num, params->request.resources);

            pthread_mutex_unlock(&mutex);
            params->request.invoked = 0;

            printf("Customer #%d request result code: %d\n", params->customer_num, request_result);
            printAll();

        } else if(params->release.invoked) {
            pthread_mutex_lock(&mutex);

            /*If not finished then try to req resources*/
            release_result = release_resources(params->customer_num, params->release.resources);

            pthread_mutex_unlock(&mutex);
            params->release.invoked = 0;

            printf("Customer #%d release result code: %d\n", params->customer_num, release_result);
            printAll();
        }
    }

    pthread_exit(0);
}
