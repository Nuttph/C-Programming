#include "stdio.h"
int student,i;
void point(){
	printf("Student? :");
	scanf("%d",&student);
	int stu[student],m[student],s[student],e[student],tt[student];
	
	for(i=0;i<student;i++){
		int total = 0;
		printf("\nStudent %d\n",i+1);
		printf("Math : ");
		scanf("%d",&m[i]);
		printf("Science : ");
		scanf("%d",&s[i]);
		printf("English : ");
		scanf("%d",&e[i]);
		total += m[i]+s[i]+e[i]; 
		tt[i] = total/3;
		printf("total = %d\n",tt[i]);
	}
	for(i=0;i<student;i++){
		if(tt[i]>=70){
			printf("A group have Studen: %d\n",i+1);
		}else if(tt[i]>=50){
			printf("B group have Studen: %d\n",i+1);
		}else{
			printf("C group have Studen: %d\n",i+1);
		}
	}
}
main(){
	x();
	point();
}

void x(){
	printf("X");
}

