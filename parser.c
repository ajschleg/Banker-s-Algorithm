//
// Created by Austin Schlegel on 2019-03-21.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "main.h"

void parseInput(char *input)
{
    char	*token;
    int     i;
    int     j;
    int     customer_num;
    char    rl = 0;
    char    rq = 0;
    int     resources[NUMBER_OF_RESOURCES];


    i = 0;
    j = 0;
    // parse first token
    token = strtok(input, " \n"); // last token will have '\n' from fgets if not included in delimiters

    // copy it to args array and parse remaining tokens if there are any
    while (token != NULL) {
        if(i == 0)
        {
            customer_num = atoi(token);
            i++;
        }
        else if(i == 1)
        {
            /* Filter input[1] */
            if(strcmp(token, "rl") < 0)
            {
                printf("Not valid input, please use:\nrl - release\nrq - request\n");
                break;
            }

            else if(strcmp(token, "rq") > 0)
            {
                printf("Not valid input, please use:\nrl - release\nrq - request\n");
                break;
            }
            else
            {
                if(!strcmp(token, "rq"))
                {
                    rq = 1;
                }
                else
                {
                    rl = 1;
                }
                i++;
            }
        }
        else
        {
            int req_num = atoi(token);
            printf("Token: %s atoi: %d\n", token, req_num);

            if(!strcmp(token, "rq"))
            {
                resources[j] = req_num;
            }
            else
            {
                resources[j] = req_num;
            }

            j++;
            i++;
        }
        token = strtok(NULL, " \n");
    }

    if(rq)
    {
        param_ptrs[customer_num]->request.invoked = 1;
        for (int k = 0; k < NUMBER_OF_RESOURCES; ++k)
        {
            param_ptrs[customer_num]->request.resources[k] = resources[k];
        }
    }
    else if(rl)
    {
        param_ptrs[customer_num]->release.invoked = 1;
        for (int k = 0; k < NUMBER_OF_RESOURCES; ++k)
        {
            param_ptrs[customer_num]->release.resources[k] = resources[k];
        }
    }
    else
    {

    }
}