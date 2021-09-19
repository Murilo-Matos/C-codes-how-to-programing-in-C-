#include<stdio.h> 

int main(void)
{
	int day, maxF, curYear, age;
	int month;
	float normalF, normalF2;
	int year;
	
	printf("day of you was born:");
	scanf("%d", &day);
	printf("month you was born:");
	scanf("%d", &month);
	printf("year you was born:");
	scanf("%d", &year);
	printf("currently year:");
	scanf("%d", &curYear);
	
	maxF = curYear - year;
	maxF = 220 - maxF;
	normalF = 50 * maxF / 100;
	normalF2 = 80 * maxF / 100;
	age = curYear - year;
	
	printf("\nyour age: %d\n", age);
	printf("\nyour max frequency cardiac: %d\n", maxF);
	printf("\nyour normal frequency cardiac is between: %.2f and %.2f\n", normalF, normalF2);
	
	return 0;
	
}