#include "stdio.h"
main(){
	int i,j;
	float sum = 0,avg = 0, money[2][7];
	for(i=0;i<2;i++){
		for(j=0;j<7;j++){
			printf("Enter money for day %d in week %d: ",j+1,i+1);
			scanf("%d",&money[i][j]);
			sum = sum+money[i][j];
			}
	}
	avg = sum/(i*j);
	printf("The average of all money : %f",avg);
	getch();
}