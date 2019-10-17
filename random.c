#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	printf("%lu\n", time(NULL));
	srand(time(NULL));
	for (int i=0; i<10; i++)
		printf("%d ", rand() % 100);
	printf("\n");
	return 0;
}
