#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

int main() {
    int arr[] = {1, 2, 3, 5, 10, 4, 1};
    int arrSize = sizeof(arr) / sizeof(int);
    int start;
    int end;
    int fd[2];
    // fd[0] - read
    // fd[1] - write
    if (pipe(fd) == -1) {//check for pipe errorr
        return 1;
    }
    int id = fork();
    if (id != 0) {
        int id = fork();
    } 
    if (id == -1) {//check for fork error
        return 2;
    }
    if (id ==0) {
        start = 0;
        end = arrSize/3; 
    } else {        
        start = 2*(arrSize/3);
        end = arrSize;
        }
    if (id == 0) {
        start = arrSize/3;
        end = 2*(arrSize/3);
    }
    int i;
    int sum = 0;
    for(i = start; i < end; i++) {
        sum += arr[i];
    }
    if (id == 0){
        printf("first child process calculated partial sum: %d\n", sum); 
    } else {
        if (id == 0) {
            printf("second child process calculated partial sum: %d\n", sum);
        } else {
        printf("parent process calculated partia sum %d\n", sum);
        }
    }
    if (id == 0) {
        close(fd[0]);
        if (write(fd[1], &sum, sizeof(sum)) == -1) {
            return 3;
        }
        close(fd[1]);
    } else {
        int sumFromChild;
        close(fd[1]);
        if (read(fd[0], &sumFromChild, sizeof(sumFromChild)) == -1) {
            return 4;
        }
        close(fd[0]);
    if (id == 0) {
        int sumFrom;
        close(fd[1]);
        if (read(fd[0], &sumFrom, sizeof(sumFrom)) == -1) {
            return 4;        
    }
        int totalSum = sum + sumFromChild + sumFrom;
        printf("total sum is %d\n", totalSum);
        wait(NULL);
    }
    return 0;
}