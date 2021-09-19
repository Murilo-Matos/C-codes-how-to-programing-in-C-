#include <stdio.h>

int main (void)

{
	//declaration of variable
	float  current = 0;
	float general = 0;
	float kilometer;
	float liter;
	float total;
	float counter= 0;
	
	//processing of dice
	printf("type it how much liters you replenished(-1 for stop):");
	scanf("%f", &liter);
	
	if(liter != -1)

{
	while(liter != -1)
	{
		printf("type it how much km you traveled :");
		scanf("%f", &kilometer);
		
		curret = kilometer / liter;
		total += current;
		counter++;
		general = total / counter;
		

		printf("\nconsumption current: %.2fkm/l\n", current);
		
		printf("type it how much liters you replenished(-1 for stop):");
		scanf("%f", &liter);
	
	}
	
	//exit's dices inside if
	
	printf("general spent: %.2f", general);
	
}

	//exit's dices inside else
	else
		printf("\nnone information was digited\n");
	
	return 0;
		
}