#include <stdio.h>
void pastr(int r1)
{
   int c = 1,sp,i,j;
   for(i=0; i<r1; i++)
    {
        for(sp=1; sp <= r1-i; sp++)
        printf("  ");

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
c = 1;
else
c = c*(i-j+1)/j;

printf("%4d", c);
}
printf("\n\n");
}
}
void main()
{
int r;
printf("\nEnter the number of rows : ");
scanf("%d",&r);
printf("\n");
printf("PASCAL'S TRIANGLE ::\n\n");
pastr(r);
getch();
}
