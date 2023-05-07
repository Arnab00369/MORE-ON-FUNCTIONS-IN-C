#include <stdio.h>
void prime(int x);
int main()
{
    int n,a;
    printf("Enter Lower Limit = ");
    scanf("%d",&a);
    printf("Enter Upper Limit = ");
    scanf("%d",&n);
    printf("The Prime Numbers between %d and %d are ::\n",a,n);
    for(int i=a+1;i<n;i++)
    {
        prime(i);
    }
    return 0;
    }

void prime(int x)
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
    printf("%d ",x);

}
