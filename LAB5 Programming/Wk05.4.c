#include "stdio.h"
#include "conio.h"
int SUM,Num,i;
main(){
	SUM = 0;
	for(i= 1 ;i<5 ;i++){
		printf("InputNumbcr %d = ",i);
		scanf("%d",&Num);
		SUM = SUM + Num;
	}
	printf("SUM = %d",SUM);
	getch();
}
