#include<stdio.h>

int main()
{
    int lr = 0;
    int lc = 0;
    int r,c;
    int matrix[50][50];
    //the array dimmension
    printf("row=");
    scanf("%d",&lr);
    printf("column=");
    scanf("%d",&lc);
    //store data into the array
    for(r=0; r < lr; r++)
    {
        for(c=0;c<lc;c++)
        {
            printf("matrix=[%d][%d]",r,c);
            scanf("%d",&matrix[r][c]);
        } 
    }
    //print the matrix
   for(r=0; r<lr; r++)
   {
       for(c=0; c<lc; c++)
       {
           printf("%d\t",matrix[r][c]);
       }
    printf("\n");
   }
return(0);
}