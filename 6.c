#include<stdio.h>
void printnatural(int n)
{
    if(n==0)
    return;
     printf("%d ",n*2);
    printnatural(n-1);
}
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     printnatural(n);
     return 0;
}

