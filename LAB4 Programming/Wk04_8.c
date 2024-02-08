#include "stdio.h"
int main()
{
	int a,b;
	char ch;
	printf("Do you want to: \n");
	printf("Add, Subtract, Multiply, or Divide ?\n");
	printf("Enter first letter:    ");
	ch = getch();
	printf("\n");
	printf("Enter forst number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	if((ch=='A') || (ch=='B'))
		printf("%d",a+b);
	else if((ch=='S') || (ch=='s'))
		printf("%d",a-b);
	else if((ch=='M') || (ch=='m'))
		printf("%d",a*b);
	else if((ch=='D') || (ch=='d'))
		printf("%d",a/b);
	getch();
	
}