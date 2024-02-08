//mea
#include "stdio.h"
main(){
	int n,i;
	for(n=2;n<=12;n++){
		printf("**%d**\n",n);
		for(i=1;i<=12;i++){
			printf("\t%d x %d = %d\n",n,i,n*i);
		}
		printf("\n*****************************\n\n");
	}
}