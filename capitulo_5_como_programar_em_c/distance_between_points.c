#include <stdio.h>
#include <math.h>

int main(void){
	
	double x_1 = 0, x_2 = 0;
	double y_1 = 0, y_2 = 0;
	double r = 0, r_x = 0, r_y = 0;
	
	printf("type it x1: ");
	scanf("%lf", &x_1);
	printf("type it y1: ");
	scanf("%lf", &y_1);
	printf("type it x2: ");
	scanf("%lf", &x_2);
	printf("type it y2: ");
	scanf("%lf", &y_2);
	
	r_x = x_2 - x_1;
	r_y = y_2 - y_1;
	
	r_x = r_x * r_x;
	r_y = r_y * r_y;
	
	r = r_x + r_y;
	r = sqrt(r);
	
	printf("The distance between the points is: %f", r);
	
	return 0;
}