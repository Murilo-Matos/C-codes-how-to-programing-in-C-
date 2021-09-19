#include<stdio.h> 

int main(void)
{
	int counter, total = 0; 
	
	for(counter = 2; counter <= 30; counter += 2)
	{
		total += counter;
	}
	
	printf(" \nthe sum of pars numbers between 2 and 30 is: %d\n", total);
	
	return 0;
}