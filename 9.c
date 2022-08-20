#include<stdio.h>
void  even(int n)
{
     if(n<8&&n>=1)
           printf("%d",n);
        else
          {
                even(n/8);
               printf("%d",n%8);

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
