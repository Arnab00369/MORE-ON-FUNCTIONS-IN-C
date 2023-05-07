#include <stdio.h>
void sq(int a);
int main()
{
 int n;
 printf("Enter a number whose Square you want to find ::\nNUMBER = ");
 scanf("%d",&n);
 sq(n);
 return 0;
}
void sq(int a)
{
    printf("The Square of %d is = %d",a,a*a);
}
