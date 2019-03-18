#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int main(int argc, char *argv[])
{
	release_resources(3, NULL);
	printf("%d\n", release_resources(3, NULL));
	printf("%d\n", request_resources(5, NULL));
	return 0;
}