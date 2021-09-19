#include<stdio.h>
#include<math.h>

int main(void)
{
	double value;
	double main = 1000.0;
	double rate;
	int year;
	
	printf("%4s%32s\n", "year", "\tvalue in cont for 5,6,7,8 and 9 percent:\n");
	
	for(year = 1; year <= 10; year++)
	{
		for(rate = .05; rate <= .10; rate+= .01)
		{
			value = main * pow(1.0 + rate, year);
			
			printf("%4d%21.2f\n", year, value);
			
		
		}
		
		
	}
	
	return 0;
}