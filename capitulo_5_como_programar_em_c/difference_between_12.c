#include<stdio.h>

double difference(int x, int y, int z);

int main(void){
	int hour = 0;
	int minute = 0;
	int second = 0;
	double result = 0;

	printf("\ntype it the hour: ");
	scanf("%d",&hour);
	printf("\ntype it the minutes: ");
	scanf("%d",&minute);
	printf("\ntype it the seconds: ");
	scanf("%d",&second);
	
	result = difference(hour,minute,second);
	
	printf("\nthe difference between the hour and the \nlast time that the clock did 12 hours in seconds: %.2lf\n", result);
	
	
	return 0;
}


double difference(int x, int y, int z){
	double result = 0;
	if (x < 12){
		int time = ( x + 24 - 12) * 3600;
	
		result = time + (60 * y) + z;
	}
	else{
		int time = ( x - 12) * 3600;
	
		result = time + (60 * y) + z;
	}
	
	return result;
}

