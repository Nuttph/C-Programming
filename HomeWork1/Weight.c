#include "stdio.h"
int main(){
	int weight;
	scanf("%d",&weight);
	int content;
	
	if(weight>50) {
		content = 1;
	}else if (weight>40 && weight<=50){
		content = 2;
	}else if (weight<=40){
		content = 3;
	}else {
		printf("Error");
	}
	switch(content) {
		case 1 : printf("You Over weight");break;
		case 2 : printf("You Normal");break;
		case 3 : printf("You Stick");break;
		default : printf("error");
	}
	return 0;
}