main: relResources.c reqResources.c main.c threadRunner.c printFunctions.c initArrays.c
	gcc -pthread -o main main.c reqResources.c relResources.c threadRunner.c printFunctions.c initArrays.c

run:
	./main 


clean:
	rm -rf main 