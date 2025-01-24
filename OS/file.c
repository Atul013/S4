#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main()
{
	char wbuf[128];
	char rbuf[128];
	int fd = open("file.txt", O_RDWR | O_CREAT, 0644);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	printf("Enter the text to be written: ");
	scanf("%s", wbuf);
	write(fd, wbuf, strlen(wbuf));
	close(fd);
	int fd2 = open("file.txt", O_RDWR);
	printf("The Contents in the file are : \n");
	read(fd2, rbuf, 100);
	printf("%s\n", rbuf);
	close(fd2);
	return 0;
}

// shits still too buggy
// i need to fix this