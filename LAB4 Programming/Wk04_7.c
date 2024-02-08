#include "stdio.h"
int main()
{
	int x;
	printf("Enter Score(0..1): ");
	scanf("%d",&x);
	if(x>=90)
	printf("EXCELLENT");
	else if(x>=80)
	printf("FAIR");
	else
	printf("FAIL");
	getch();
}