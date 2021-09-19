#include <stdio.h>

int main(void){
	int home;
	int food;
	int clothes;
	int transport;
	int education;
	int health;
	int vacation;
	int result = 0;
	
	printf("your spending with home:");
	scanf("%d",&home);
	printf("your spending with food:");
	scanf("%d",&food);
	printf("your spending with clothes:");
	scanf("%d",&clothes);
	printf("your spending with transport:");
	scanf("%d",&transport);
	printf("your spending with education:");
	scanf("%d",&education);
	printf("your spending with health:");
	scanf("%d",&health);
	printf("your spending with vacation:");
	scanf("%d",&vacation);
	
	result = home*23/100 +  food*23/100 + clothes*23/100 +  transport*23/100 +  education*23/100 +  health*23/100 +  vacation*23/100;
	
	printf("Your rate is R$%d", result);
	
	return 0;
	
}