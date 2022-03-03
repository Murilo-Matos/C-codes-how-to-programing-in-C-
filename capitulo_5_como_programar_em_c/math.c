#include <stdio.h>
#include <math.h>

int main(void){
	
	int x = 0;
	int y = 0;
	
	printf("Type it an argument: ");
	scanf("%d",&x);
	printf("Type it other argument: ");
	scanf("%d",&y);
	
	printf("\nsquare of x: %f", sqrt(x));
	printf("\nexponencial of x: %f", exp(x));
	printf("\nlog of x: %f", log(x));
	printf("\nlog10 of x: %f", log10(x));
	printf("\nabsolut value of x: %f", fabs(x));
	printf("\nsmallest number not smaller than x: %f", ceil(x));
	printf("\nbiggest number not bigger than x: %f", floor(x));
	printf("\nx raised to y: %f", pow(x,y));
	printf("\nrest of x/y: %f", fmod(x,y));
	printf("\nsin of x: %f", sin(x));
	printf("\ncos of x: %f", cos(x));
	printf("\ntan of x: %f", tan(x));
	
	return 0;
}