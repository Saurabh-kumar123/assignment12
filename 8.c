#include<stdio.h>
void  even(int n)
{
     if(n==1)
           printf("1");
        else
          {
                even(n/2);
               printf("%d",n%2);

          }
}
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     even(n);
     return 0;
}
