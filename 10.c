#include<stdio.h>
void rev(int n)
{
     int sum=0;
     if(n==0)
          return;
     printf("%d",n%10);
     rev(n/10);
}
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     rev(n);
     return 0;
}
