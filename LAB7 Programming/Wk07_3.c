#include "stdio.h"
float CalBonus(float salary,int level){
	float result;
	result = salary * (level*0.05);
	return result;
}
main(){
	float sal1,bonus;
	int level1;
	printf("enter salary: "); scanf("%f",&sal1);
	printf("center salary: "); scanf("%d",&level1);
	bonus = CalBonus(sal1,level1);
}