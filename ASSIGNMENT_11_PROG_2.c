#include <stdio.h>
int hcf(int,int);
int main()
{
    while(1)
    {
    int a,b;
    printf("Enter two numbers ::\n1st Number = ");
    scanf("%d",&a);
    printf("2nd Number = ");
    scanf("%d",&b);
        if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("The H.C.F of %d and %d is = %d ",a,b,hcf(a,b));
    return 0;
    }
}
int hcf(int x,int y)
{
    int r;
   while(1)
   {
       if(y%x==0)
       {
           return x;
           break;
       }
       else
       {
           r=y%x;
           y=x;
           x=r;
       }
   }
}
