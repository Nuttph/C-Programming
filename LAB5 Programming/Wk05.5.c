#include "stdio.h"
#include "conio.h"
main()
{
int num,sum,prod,max;
sum = 0;
prod = 1;
printf("Input number = ");
scanf("%d",&max);
for(num=1 ;num<=max;num=num+1 )
{
sum = sum + num;
prod = prod*num;
}
printf("product = %d and sum = %d",prod,sum);
getch();
}