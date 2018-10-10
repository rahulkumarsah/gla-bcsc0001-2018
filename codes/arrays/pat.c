#include<stdio.h>
void main()
{
    int n,j,i;
    printf("enter a no.\n");
    scanf("%d",&n);
    int d=(n*2)-1;
    for(i=1;i<=d/2+1;i++)
    {
    for(j=1;j<=d;j++);
       {
         if(i==1 || i==d)
         printf("%d",n);
         else if(j==d || j==1)
         printf("%d",n);
         else
         printf("%d",n+1-i);
         }
         printf("\n");
    }
}
