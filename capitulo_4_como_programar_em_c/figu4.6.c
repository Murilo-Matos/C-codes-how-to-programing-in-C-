#include<stdio.h> 
#include<math.h>

int main(void)
{
	int value,  value1, value2;
	int mainn = 1000;
	int rate = 5;
	int year;
	
	printf("%4s%21s\n", "year","value in cont");
	
	for(year = 1; year <= 8; year++)
	{
		value = mainn * pow( 1 + rate, year);
		
		value1 = value / 1000;
		value2 = value % 10;
		
		printf("%4d%21d,%1d\n",year, value1,value2);
	}
	
	return 0;
}