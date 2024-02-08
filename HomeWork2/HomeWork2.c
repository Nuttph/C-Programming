#include<stdio.h>
main(){
	int i,mod;
	for(i = 2;i<=12;i++){
		printf("\n");
		printf("**%d** \n",i);
		printf("\n");
		for(mod = 1; mod<=12; mod++){
			printf("%d x %d = %d \n",i,mod,i*mod);
		};
	};
	getch();
}