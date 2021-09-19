#include<stdio.h>

int main(void){
	
	double c = 0;
	double f = 0;
	
	printf("\ntype it the temperature in celsius: ");
	scanf("%lf", &c);
	
	f = (9*c + 160)/5;
	
	printf("\nthe temperature in fahrenheit is: %.2f\n", f);
	
	c = 0;
	f = 0;

	printf("\n-----------------------------------------\n\nThen type it the temperature in fahrenheit: ");
	scanf("%lf", &f);
	
	c = (5*f - 160) / 9;
	
	printf("\nthe temperature in celsius is: %.2f\n", c);
	
	 int c_2 = 1;
	 int f_2 = 0;
	
	printf("\n----------------------------------------\ncelsius\tfahrenheit\n\n0\t32\n\n");
	while(c_2 <= 100){
		f_2 = (9*c_2 + 160)/5;
		printf("%d\t%d\n\n",c_2,f_2);
		c_2++;
	}
	
	
	return 0;
}