cmake_minimum_required(VERSION 3.13)
project(Banker_s_Algorithm C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Banker_s_Algorithm
        main.c
        main.h
        safetyAlgorithm.c
        relResources.c
        reqResources.c threadRunner.c printFunctions.c initArrays.c parser.c)
