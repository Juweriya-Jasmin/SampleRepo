#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main() {
    int fd = open("file1.txt", O_RDONLY);
    char buffer[100];
    if (fd==-1) {
        perror("open");
        return 1;
    }

    int n = read(fd, buffer, sizeof(buffer));
    write(1, buffer, n);  
    printf("Message read succesfully");

    close(fd);
    return 0;
}
