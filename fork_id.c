#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/*
*function - print the type of used process depend of id. 
*@id: intiger take the return value of fork. 
*return 0 
*/

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int id = fork();
    if (id == 0)
    {
        printf("hello from child process with id %d\n", id);
    } 
    else {
        printf("hello from main process with id %d\n", id);
    }
    return 0 ;
}