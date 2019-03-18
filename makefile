main: relResources.c reqResources.c main.c
	gcc -pthread -o main main.c reqResources.c relResources.c

run:
	./main 


clean:
	rm -rf main 