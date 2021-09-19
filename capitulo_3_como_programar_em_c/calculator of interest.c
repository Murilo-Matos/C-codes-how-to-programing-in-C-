#include <stdio.h>

int main(void)

{
	float interest;
	float rate;
	float days;
	float moreImportant;
	
	printf("type it the main value of loan:");
	scanf("%f", &moreImportant);
	
	while(moreImportant != -1)
	{
		printf("type it the rate interests:");
		scanf("%f", &rate);
		printf("type it the deadline of loan in days:" );
		scanf("%f", &days);
		
		interest = rate * days * moreImportant / 365;
		
		printf("the value of interests is: %.2f\n", interest);
		
		printf("type it the main value of loan:");
		scanf("%f", &moreImportant);
	}
	
	return 0;
}