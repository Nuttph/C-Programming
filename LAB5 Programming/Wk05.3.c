#include "stdio.h"
int SUM,Num,i;
main()
{
SUM = 0;
printf("Input Number = ");
scanf("%d",&Num);
for(i = 1;i<=Num;i++){
	SUM = SUM + i;
}
printf("SUM = %d\n",SUM);
getch();
}