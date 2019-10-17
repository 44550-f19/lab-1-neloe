#include <pthread.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int myval = 42;

void * thread_fcn(void*args);

int main()
{
	srand(time(NULL));
	pthread_t tid;
	void * results;
	pthread_create(&tid, NULL, thread_fcn, NULL);
	myval += rand() % 100;
	printf("In main, %d\n", myval);
	pthread_join(tid, &results);
	return 0;
}

void * thread_fcn(void*args)
{
	myval += rand() % 100;
	printf("In thread, %d\n", myval);
	pthread_exit(NULL);
}
