#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <time.h>


void fibo(int f) {
    int i, n, n1, n2, aux;
    n1 = 0;
    n2 = 1;

    int id = fork();
    if (id == 0) {
        n = 0;
    } else {
        n == f/2;
    }

    if (id != 0) {
        wait(NULL); 
    }

    for (i = n; i < n+f-2; i++) {
        aux = n2;
        n2 = n1 +n2;
        n1 = aux;
    }
        if (id != 0)
    {
        printf("the %dth number: %d\n", f, n2);
        printf("\n");
    }
}

int main() {
    int i,f;
    printf("give me a number\n");
    scanf("%d", &f);
    fibo(f);
    return 0;
}