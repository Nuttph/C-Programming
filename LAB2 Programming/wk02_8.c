#include <stdio.h>
int main(){
	char aChar ='A';
	int intNum = 200;
	double fltNum = 245.3;
	printf("aChar contains: %c\n",aChar);
	printf("aChar numeric: %d\n",aChar);
	printf("intNum contains: %d\n",intNum);
	printf("fltNum contains: %.f\n",fltNum);
	
	intNum = intNum + aChar;
	fltNum = fltNum + aChar;
	
	printf("\nAfter additions... \n");
	printf("aChar numberic: %d\n",aChar);
	printf("intNum numberic: %d\n",intNum);
	printf("fltNum numberic: %f\n",fltNum);
	getch();
}