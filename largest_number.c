#include<stdio.h>

int largest_number(int *p1, int *p2, int *p3);

int main()
{
  int num1, num2, num3, l;
  int *p1;
  int *p2;
  int *p3;
  p1 = &num1;
  p2 = &num2;
  p3 = &num3;
  //taking input from user
  printf("Enter First Number: ");
  scanf("%d",p1);
  printf("Enter Second Number: ");
  scanf("%d",p2);
  printf("Enter Third Number: ");
  scanf("%d",p3);
  l = largest_number(p1, p2, p3);
  printf("%d is the largest number\n", l);
    

  
  return 0;
}

int largest_number(int *p1, int *p2, int *p3)
{
  int largest = 0;
    if(*p1 > *p2)
    {
	if(*p1 > *p3)
	{
	  largest = *p1;
	}
	else
	{
	  largest = *p3;
	}
    }
    else
    {
	if(*p2 > *p3)
	{
	  largest = *p2;
	}
	else
	{
	  largest = *p3;
	}
  
	return (largest);
}
}
