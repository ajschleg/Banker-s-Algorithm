main: relResources.c reqResources.c main.c threadRunner.c
	gcc -pthread -o main main.c reqResources.c relResources.c threadRunner.c

run:
	./main 


clean:
	rm -rf main 