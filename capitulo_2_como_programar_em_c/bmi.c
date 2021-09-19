#include <stdio.h>

int main (void)

{
	//declaration of variable 
	float bmi;
	float weight;
	float height;
	
	//input of dices
	printf("type it your height:");
	scanf("%f", &height);
	printf("type it your weight:");
	scanf("%f", &weight);
	
	//procesing
	bmi = weight/ (height * height);
	
	//exit of dices
	if (bmi < 18.5)
		printf("below of weight\n"); 
	
	if (bmi > 18.5 && bmi < 24.9)
		printf("normal");
	
	if(bmi > 25 && bmi < 29.9)
		printf("above of weight\n");
	
	if(bmi >= 30)
		printf("obese\n");
		
	return 0;
}

	