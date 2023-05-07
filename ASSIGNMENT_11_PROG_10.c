#include <stdio.h>
int fact(int);
int main()
{
    int s=0;
    for(int i=1;i<=5;i++)
    {
        if(i<5)
        printf("%d!/%d + ",i,i);
        else
            printf("%d!/%d = ",i,i);
    }
    for(int i=1;i<=5;i++)
    {
        s=s+(fact(i)/i);
        if(i<5)
        printf("%d/%d + ",fact(i),i);
        else
            printf("%d/%d = ",fact(i),i);
    }
    printf("%d",s);
    return 0;
}
int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
