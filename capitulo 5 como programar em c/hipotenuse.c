#include <stdio.h>
#include <math.h>

double hipotenuse(double x, double y);

int main(void){
	
	printf("\nhipotenuse 1: %.2lf\n", hipotenuse(3,4));
	printf("\nhipotenuse 2: %.2lf\n", hipotenuse(5,12));
	printf("\nhipotenuse 3: %.2lf\n", hipotenuse(8,15));
	
	return 0;
}

double hipotenuse(double x, double y){
	
	double result = 0;
	
	result = sqrt(pow(x,2) + pow(y,2));
	
	return result;
}