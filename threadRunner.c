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
    pthread_exit(0);
}
