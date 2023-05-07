#include <stdio.h>
int lcm(int,int);
void main()
{
    int a,b;
    printf("Enter Two Numbers ::\n1st Number = ");
    scanf("%d",&a);
    printf("2nd Number = ");
    scanf("%d",&b);
    if(a>b)
    {
        a=a+b;b=a-b;a=a-b;
    }
    printf("The L.C.M. of %d and %d is = %d",a,b,lcm(a,b));
    getch();
}
int lcm(int x,int y)
{
    for(int i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            return i;
            break;
        }
        else
            continue;
    }
}
