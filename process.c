#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
int myval = 42;

int main()
{
	int myid = getpid();
	int cpid = fork();
	srand(getpid());
	myval += rand()%100;
	if (cpid > 0)
	{
		// parent process
		printf("my pid: %d, child pid: %d, myval:%d\n", myid, cpid, myval);
	}
	else
	{
		// child process
		printf("Child process: %d, myval:%d\n", getpid(), myval);
	}
	return 0;
}
