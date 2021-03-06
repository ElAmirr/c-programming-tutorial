#include <stdio.h>

int fibonacci(int n)
{
    if(n<2)
    {
        return n;
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
int get_a_number(int n)
{
    printf("give a number\n");
    scanf("%d",&n);
return(n);
}

int main(int n)
{
    int fi = 0;
    n=get_a_number(n);
    fi = fibonacci(n);
    printf("fibonacci of %d is %d\n", n, fi);
return(0);
}