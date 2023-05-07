#include <stdio.h>
#include <stdbool.h>
void prime(int x);
int main()
{
    int n;
    printf("Enter how many Prime Numbers you want to print = ");
    scanf("%d",&n);
    printf("\nThe First %d Prime Numbers are ::\n",n);
    prime(n);
    return 0;
}
void prime(int x)
{
    int c=0,j=2;
    bool c1;
    while(c<x)
    {
        c1=true;
        for(int i=2;i<=sqrt(j);i++)
        {
            if(j%i==0)
            {
                c1=false;
                break;
            }
        }
        if(c1)
        {
            printf("%d ",j);
            c++;

        }
        j++;
    }
    }
