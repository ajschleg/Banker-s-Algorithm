//
// Created by Austin Schlegel on 2019-03-18.
//
#include <pthread.h>
#include <stdio.h>

#include "main.h"

void* thread_runner(void* param)
{
    printf("In thread\n");
    
    pthread_exit(0);
}
