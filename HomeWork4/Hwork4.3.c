//Final score
#include "stdio.h"
main(){
	int i,c;
	float mid[10],fin[10];
	for(i=0;i<=9;i++){
		printf(">>Student %d\n",i+1);
		printf("-Midterm score: ");
		scanf("%f",&mid[i]);
		printf("-Finalterm score: ");
		scanf("%f",&fin[i]);
		printf("\n");
	}
	printf("========== Board ==========\n");
	for(i=0;i<=9;i++){
		printf("Student %d\n",i+1);
		printf("total = %.2f points\n\n",mid[i]+fin[i]);
	}
}