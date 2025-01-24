#include<stdio.h>
#include<unistd.h>
int main()
{
	int pid = fork();
	if (pid < 0)
	{	
		perror("fork");
		return 1;
	}
	if (pid == 0)
	{	
		printf("Hello from Child ! (PID: %d)\n", getpid());
	}
	else
	{	
		printf("Hello from Parent ! (PID: %d, Child PID: %d)\n", getpid(), pid);
	}
	return 0;
}
