//
// Created by Austin Schlegel on 2019-03-18.
//
#include <pthread.h>
#include <stdio.h>

#include "main.h"

void* thread_runner(void* param)
{
    /*Use temp to access and change thread status*/
    thread_params_t* params = (thread_params_t *)param;

    printf("Thread ID: %d\n", params->customer_num);

    // while(!exit)
    while(should_run)
    {
        if (params->request.invoked)
        {
            pthread_mutex_lock(&mutex);

            /*If not finished then try to req resources*/
            request_resources(params->customer_num, params->request.resources);

            pthread_mutex_unlock(&mutex);
            params->request.invoked = 0;

        } else if(params->release.invoked) {
            pthread_mutex_lock(&mutex);

            /*If not finished then try to req resources*/
            release_resources(params->customer_num, params->release.resources);

            pthread_mutex_unlock(&mutex);
            params->release.invoked = 0;
        }
    }

    pthread_exit(0);
}
