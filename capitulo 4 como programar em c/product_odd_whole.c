#include<stdio.h> 

int main(void)

{
	int counter, total = 1;
	
	for(counter = 1; counter <= 15; counter += 2)
	{
		total = total * counter;
	}
	
	printf(" \nthe product of odd whole is: %d\n", total);
	
	return 0; 
}