#include <stdio.h>
int prime(int);
int main()
{
    int a,a1;
    printf("Enter a number = ");
    scanf("%d",&a);
    a1=a;
    a=a+1;
    for(;;)
    {
        if(prime(a)==0)
        {

            printf("%d's next prime number is = %d",a1,a);
            break;
         }
        else
            prime(a++);
    }
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
