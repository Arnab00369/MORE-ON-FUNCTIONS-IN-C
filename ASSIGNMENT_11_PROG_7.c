#include <stdio.h>
void fib(int a);
int main()
{
    int n;
    printf("Enter upto which term you want to print the Fibonacci Series =  ");
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int p)
{
    int c=2,a=0,b=1,fib=0;
    if(p==1)
    {
        printf("Therefore, the First Term of Fibonacci Series is = 0");
        exit(0);
    }
    else if(p==2)
    {
        printf("Therefore, the First %d Terms of Fibonacci Series is = 0 1",p);
        exit(0);
    }
    printf("The First %d Terms of Fibonacci Series are = 0 1 ",p);
    while(1)
    {
      fib=a+b;
      a=b;
      b=fib;
      printf("%d ",fib);
      c++;
      if(c==p)
        break;
    }
}
