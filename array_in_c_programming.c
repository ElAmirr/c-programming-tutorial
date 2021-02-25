#include <stdio.h>

int main()
{
    int avg = 0;
    int sum = 0;
    int i = 0;
    int l = 0;
    int num[50];
    //the array length
    printf("choose the length of the table\n");
    scanf("%d",&l);
    //Input data into the array
    for(i=0;i<l;i++)
    {
        printf("num=[%d]",i);
        scanf("%d",&num[i]);
    } 
    //calculation procces
    sum = num[0];
    for(i=0;i<4;i++)
    {
        sum = sum+num[i];
    }
    avg = sum/l;
    printf("%d\n",sum);
    printf("%d",avg);
    return(0);
}