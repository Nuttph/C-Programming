#include <stdio.h>
#define TWOPI (3.1415926 * 2.0)
main(){
	double radius,circumf;
	printf("Enter radius: ");
	scanf("%lf",&radius);
	circumf = TWOPI * radius;
	printf("Circumference: %g\n",circumf);
	getch();
}