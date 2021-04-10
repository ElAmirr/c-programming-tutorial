#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
#include <unistd.h>
//#include <sys/types.h>
//#include <sys/wait.h>


int main() {
    int fd[2]; // file discriptors aka fd 
    // fd[0] - read
    // fd[1] - write
    if (pipe(fd) == -1) {
        printf("An error ocured with opening the pipe\n");
        return 1;
    }
    int id = fork();
    if (id == -1) {
        printf("an error ocurred with fork");
    }
    if (id == 0) {
        close(fd[0]);
        int x;
        printf("input a number ");
        scanf("%d", &x);
        if (write(fd[1], &x, sizeof(int)) == -1) {
            printf("an error ocured with writing to the pipe\n");
            return 2;
        }; //write into something
        close(fd[1]);
    } else {
        close(fd[1]);
        int y;
        if (read(fd[0], &y, sizeof(int)) == -1) {
            printf("an error ocured with reading from pipe\n");
        }; //read into something
        close(fd[0]);
        printf("got from the child process %d\n", y);

    }

    return 0;
}