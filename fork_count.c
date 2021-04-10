#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>

/*
*function - printing number from 0 to 10 the first 5 with the child process and last five with the parent process.
*@id: intiger take the return value of fork. 
*return 0 
*/

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int id = fork();
    int n;
    int i;
    if (id == 0)
    {
    n = 1;
    }
    else 
    {
    n = 6;
    }
    if (id != 0)    //with tihs linr of code
        wait(NULL); //without this line of code
    }               //67891012345
    for(i = n; i < n + 5; i++)
    {
        printf("%d", i);
        //fflush(stdout); 
    }
    if (id != 0)
    {
        printf("\n");
    }
    return 0;
}    