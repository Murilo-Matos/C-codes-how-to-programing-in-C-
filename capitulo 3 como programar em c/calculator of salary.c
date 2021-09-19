#include <stdio.h>

int main(void)

{
	float hoursWorked;
	float salaryHour;
	float salary;
	float half;
	
	printf("type it hours worked (-1 for stop):");
	scanf("%f", &hoursWorked);
	
	while(hoursWorked != -1)
	{
		if (hoursWorked <= 40)
		{
			printf("type it salary for hour:");
			scanf("%f", &salaryHour);
		
			salary = hoursWorked * salaryHour;
		
			printf("salary is: %.2f\n", salary);
			printf("type it hours worked (-1 for stop):");
			scanf("%f", &hoursWorked);
		
		}
			
		else
		{
			printf("type it salary for hour:");
			scanf("%f", &salaryHour);
			
			half = salaryHour / 2;
			salary = hoursWorked * salaryHour;
			
			salary = half + salary;
			
			printf("salary is: %.2f\n", salary);
			printf("tyoe it hours worked (-1 for stop):");
			scanf("%f", &hoursWorked);
			
		}
		
	}
	return 0;	
}