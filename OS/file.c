#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main() {
    char buf[128];
    int fd = open("file.txt", O_RDWR | O_CREAT, 0644);
    if (fd < 0) { perror("open"); return 1; }

    printf("Enter text: ");
    scanf("%s", buf);
    write(fd, buf, strlen(buf));
    close(fd);

    fd = open("file.txt", O_RDWR);
    printf("File contents:\n");
    read(fd, buf, sizeof(buf));
    printf("%s\n", buf);
    close(fd);

    return 0;
}
