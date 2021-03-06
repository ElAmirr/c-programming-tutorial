#include<stdio.h>

int fact(int n)
{
	if(n == 0)
	{
	return(1);
	}
	return(n*fact(n-1));
}

int main()
{
	int f;
	f=fact(5);
	printf("5!=%d\n",f);
return 0;
}
