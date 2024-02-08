#include "stdio.h"
main(){
	int n,i,max,min;
	printf("Enter maxloop =");
	scanf("%d",&n);
	int r[n];
	for(i = 1 ; i<=n ; i++){
		printf("enter number%d = _",i);
		scanf("%d",&r[i]);
		if(i == 1){
			min = r[1];
			max = r[1];
		}
		max = max > r[i] ? max : r[i];
		min = min < r[i] ? min : r[i];
	}
	printf("Number distance %d is %d and %d",max,min,max+min);
}