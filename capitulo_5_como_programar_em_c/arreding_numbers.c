/*header */
#include <stdio.h>
#include <math.h>

/*prototypes of functions*/
int arredIntNumbers(double value);
double arredTenthNumbers(double value);
double arredHundredthNumbers(double value);
double arredThousandthNumbers(double value);

/*main function*/
int main(void){
	double x = 0;
	
	printf("Type it a number:");
	scanf("%lf",&x);
	
	printf("\n\nThe original value: %.2lf", x);
	printf("\n\nThe value arreded to the next int:  %d", arredIntNumbers(x));
	printf("\n\nThe value arreded to the next tent number:  %.2lf", arredTenthNumbers(x));
	printf("\n\nThe value arreded to the next hundredth number:  %.2lf", arredHundredthNumbers(x));
	printf("\n\nThe value arreded to the next Thousandth number:  %.3lf\n", arredThousandthNumbers(x));
	

	return 0;
}

/*Arred to next int number*/
int arredIntNumbers(double value){
	int y = 0;
	
	y = ceil(value);
	
	return y;
}

/*Arred to next tenth number*/
double arredTenthNumbers(double value){
	double y = 0;
	
	y = floor(value*10+5)/10;
	
	return y;
}

/*Arred to next hundredth number*/
double arredHundredthNumbers(double value){
	double y = 0;
	
	y = floor(value*100+5)/100;
	
	return y;
}

/*Arred to next thousandth number*/
double arredThousandthNumbers(double value){
	double y = 0;
	
	y = floor(value*1000+5)/1000;
	
	return y;
}

