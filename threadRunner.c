//
// Created by Austin Schlegel on 2019-03-18.
//
#include <pthread.h>
#include <stdio.h>

#include "main.h"

void* thread_runner(void* param)
{
    /*Use temp to access and change thread status*/
    struct thread* temp = (struct thread *)param;

    printf("Thread ID: %d\n---Status: %d\n", temp->ID_, temp->status_);


    /*Check if process is not finished*/
    if (temp->status_ == 0)
    {
        /*If not finished then try to req resources*/
        request_resources(temp->ID_, &need[temp->ID_][0]);
    }
    else
    {
        /*Probably wont get here if this process is finished */
    }


    pthread_exit(0);
}
