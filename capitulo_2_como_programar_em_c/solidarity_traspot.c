#include <stdio.h>

int main (void)
{
	//declaration of varaible
	float totalkm;
	float costL;
	float average_Km_forL;
	float priceP;
	float spentP;
	float receit;
	float expense;
	float oneweek, oneweek2;
	float onemonth, onemonth2;
	float oneyear, oneyear2;
	
	//input of dices
	printf("type it your total kilometers traveled for day:");
	scanf("%f", &totalkm);
	printf("type it your cost for liter of combustible:");
	scanf("%f", &costL);
	printf("type it your average of kilometers for liter:");
	scanf("%f", &average_Km_forL);
	printf("type it your price of parking lount for day:");
	scanf("%f", &priceP);
	printf("type it your diario spent with pieces:");
	scanf("%f", &spentP);
	printf("type it your receit:");
	scanf("%f", &receit);
	
	//processing
	expense = totalkm + costL + average_Km_forL + priceP + spentP;
	oneweek = receit/4 - 3 * expense;
	onemonth = receit - 15 * expense;
	oneyear = 12 * receit - 182.5 * expense;
	
	oneweek2 = receit/4 - 5 * expense;
	onemonth2 = receit - 30 * expense;
	oneyear2 = 12 * receit - 365 * expense;
	
	//exit of dices
	printf("\nif you use the solidarity transport you will have a profit of:\n");
	printf("one week: %.2f\n", oneweek);
	printf("one month: %.2f\n", onemonth);
	printf("one year: %.2f\n", oneyear);
	printf("\nif you don't use the solidarity transport you will have have a profit of:\n");
	printf("one week: %.2f\n", oneweek2);
	printf("one month: %.2f\n", onemonth2);
	printf("one year: %.2f\n", oneyear2);
	
	return 0;
}