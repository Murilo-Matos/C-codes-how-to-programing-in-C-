#include <stdio.h>

double customers(double x);

int main(void){
	double customer_1 = 0;
	double customer_2 = 0;
	double customer_3 = 0;
	double value_1 = 0;
	double value_2 = 0;
	double value_3 = 0;
	double sum_value = 0;
	double sum_hours = 0;
	
	printf("type only decimal numbers or natural numbers with '.0', how '4.0'\n");
	printf("\ntype it the hours that you passed in the parking(the limit is 24h):");
	scanf("%lf",&customer_1);	
	printf("\ntype it the hours that you passed in the parking(the limit is 24h):");
	scanf("%lf",&customer_2);	
	printf("\ntype it the hours that you passed in the parking(the limit is 24h):");
	scanf("%lf",&customer_3);
	
	value_1 = customers(customer_1);
	value_2 = customers(customer_2);
	value_3 = customers(customer_3);
	
	sum_hours = customer_1 + customer_2 + customer_3;
	sum_value = value_1 + value_2 + value_3;
	
	printf("\nCarro\tHoras\tTaxa");
	printf("\n1\t%.2f\t%.2f", customer_1, value_1);
	printf("\n2\t%.2f\t%.2f", customer_2, value_2);
	printf("\n3\t%.2f\t%.2f", customer_3, value_3);
	printf("\n\nTOTAL\t%.2f\t%.2f",sum_hours,sum_value);

	
	return 0;
}

double customers(double x){
	double value = 0.0;
	if (x <= 3){
		value = 2.0;
	}
	else if (x <= 6){
		if(x >= 4 && x < 5){	
			value = 2.50;
		}
		else if(x >= 5 && x < 6){
			value = 3.00;
		}
		else if(x == 6){
			value = 3.50;
		}
	}
	else if (x <= 9){
		value = 5.50;
	}
	else if (x <= 12){
		if(x >= 10 && x < 11){
			value = 6.00;
		}
		else if(x >= 11 && x < 12){
			value = 6.50;
		}
		else if(x == 12){
			value = 7.0;
		}
	}
	else if (x > 12 || x <= 24){
		value = 10.0;
	}
	return value;
}