#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int id = fork();
    if (id == 0) //"parent"= 493 current ID: 492, parent ID: 99
    {            //"child"= 0 current ID: 493, parent ID: 492            
        sleep(1);//"parent"= 509 current ID: 508, parent ID: 99
    }            //"child"= 0 current ID: 509, parent ID: 1
    printf("process_id= %d current ID: %d, parent ID: %d\n", 
        id, getpid(), getppid());
    
    //we get from the wait call the process id you waited for
    int res = wait(NULL); //using wait function make the parent wait for the child to finish
    if (res == -1){ //wait return error if you have nothing to wait for
        printf("No children to wait\n");
    } else {
        printf("the process with id= %d finiched execution\n", res); //return the procces id you waiting for
    }
    return 0;
}
//u should usualy call wait if u call fork