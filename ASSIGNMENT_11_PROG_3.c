#include <stdio.h>
int prime(int);
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    if(prime(a)==0)
        printf("%d is a prime Number",a);
    else
        printf("%d is not a Prime Number",a);
    return 0;
}
int prime(int x)
{
    int c=0;
    for(int i=1;i<=x;++i)
    {
        if(x%i==0)
        {
            c++;

        }
 }
 if(c==2)
    return 0;
 else
    return 1;

}
