#include<stdio.h>

void separator(int value);

int main(void){
	
	int number = 0;
	
	printf("Type it a number between 1 and 32767: ");
	scanf("%d", &number);
	
	separator(number);
	return 0;
}

void separator(int value){
	
	int x = 0;
	
	if (value <= 32767 && value >= 10000){
		x = value /10000;
		int n = x;
		int x_2 = value / 1000; 
		
		int n_2 = (n * 10 - x_2) * (-1);
		int x_3 = value/100;
		
		int n_3 = ((n*100) + (n_2*10) - x_3) * (-1);
		int x_4 = value/10;
		
		int n_4 = ((n*1000) + (n_2*100) + (n_3*10) - x_4) * (-1);
		int x_5 = value/1;
		
		int n_5 = ((n*10000) + (n_2*1000) + (n_3*100) + (n_4*10) - x_5) * (-1);
		printf("\nthe number: %d  %d  %d  %d  %d\n",n,n_2,n_3,n_4,n_5);
	}
	else if(value <= 9999 && value >= 1000){
		x = value /1000;
		int n = x;
		int x_2 = value / 100; 
		
		int n_2 = (n * 10 - x_2) * (-1);
		int x_3 = value/10;
		
		int n_3 = ((n*100) + (n_2*10) - x_3) * (-1);
		int x_4 = value/1;
		
		int n_4 = ((n*1000) + (n_2*100) + (n_3*10) - x_4) * (-1);

		printf("\nthe number: %d  %d  %d  %d\n",n,n_2,n_3,n_4);
	}
	else if(value <= 999 && value >= 100){
		x = value /100;
		int n = x;
		int x_2 = value / 10; 
		
		int n_2 = (n * 10 - x_2) * (-1);
		int x_3 = value/1;
		
		int n_3 = ((n*100) + (n_2*10) - x_3) * (-1);

		printf("\nthe number: %d  %d  %d\n",n,n_2,n_3);
	}
	else if(value <= 99 && value >= 10){
		x = value /10;
		int n = x;
		int x_2 = value / 1; 
		
		int n_2 = (n * 10 - x_2) * (-1);

		printf("\nthe number: %d  %d\n",n,n_2);
	}
	else if(value <= 9 && value >= 1){
		printf("\nthe number: %d\n",value);
	}
}