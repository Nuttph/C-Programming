//temperature
#include "stdio.h"
main(){
	int i,c=1;
	float temp[7],total=0;
	printf("Celsius temperature\n");
	for(i=0;i<=6;i++){	
		printf("Day %d: ",c);
		c++;
		scanf("%f",&temp[i]);
		total+=temp[i];
		continue;
	}
	printf("average temperature is : %.2f",total/i);
}