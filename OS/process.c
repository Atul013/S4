#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	int pidc, status;
	int pid = fork();
	if (pid < 0)
	{
		perror("fork");
		return 1;
	}
	if (pid == 0)
	{	
		printf("Hello from Child! (PID : %d) \n",getpid());
		execlp("/bin/date","date",NULL);
		
	}
	else
	{
		pidc = wait(&status);
		printf("\nHello from Parent class (PID: %d, childPID: %d) \n",getpid(), pid);
	}
	return 0;
}


