#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/*
*function - printing odd or even nb of message
*@id: intiger take the return value of fork. 
*return 0 
*/

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    
    //multiply the message with odd number
    
    //int i;
    //for(i = 0; i < 4; i++)
    //{
    //    fork();
    //}
    //printf("hello world\n");
    
    //multiply the message with even number
    int id = fork();
    if (id != 0) {
         fork();
    }
    printf("hello world\n");
    return 0;
}