#include<stdio.h>

void perfect_number(double number);

int main(void){
	
	double n = 0;
	
	printf("\nType it a number from 1 to 9 bilion: ");
	scanf("%lf", &n);
	
	 perfect_number(n);
	 
	return 0;
}


void perfect_number(double number){
	if(number == 6){
		printf("\nthis is a perfect number!\n");
	}
	else if(number == 28){
		printf("\nthis is a perfect number!\n");
	}
	else if(number == 486){
		printf("\nthis is a perfect number!\n");
	}
	else if(number == 8128){
		printf("\nthis is a perfect number!\n");
	}
	else if(number == 33550336){
		printf("\nthis is a perfect number!\n");
	}
	else if(number == 8589869046){
		printf("\nthis is a perfect number!\n");
	}
	else{
		printf("\nit is not a perfect number :( \n");
	}
	
	printf("\nBelow there are all perfect number from 1 to 1000:\n");
	printf("\n6\n28\n486\n");
}