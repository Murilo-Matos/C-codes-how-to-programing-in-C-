#include <stdio.h>


int prime_number(int n);

int main(void){
	
	int x = 0;
	int result = 0;
	
	printf("type it a number: ");
	scanf("%d", &x);
	
	result = prime_number(x);
	
	if (result == 1){
		printf("\nthis is a prime number!!\n");
	}
	else{
		printf("\nthis isn't a prime number :(\n");
	}
	
	return 0;
}


int prime_number(int n){
	
	if (n % 2 != 0 || n == 2){
		if(n % 3 != 0  || n == 2|| n == 3 ){
			if(n % 5 != 0 || n == 2 || n == 3 || n == 5){
				if(n % 7 != 0 || n == 2 || n == 3 || n == 5|| n == 7){
					return 1;
		 		 }		
			}			
		}
	}
	return 0;
}