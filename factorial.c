#include <stdio.h>

int fact(int n)
{
    int i=1;
    int f=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return(f);
}

int main() {
int f=0;
f=fact(5);
printf("5!=%d",f);
    return 0;
}
