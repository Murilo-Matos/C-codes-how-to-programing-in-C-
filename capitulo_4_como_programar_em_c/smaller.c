#include<stdio.h> 

int main(void)

{
	int N = 0, B, smaller = 0, counter;
	
	
	printf("write the quantity of numbers:");
	scanf("%d", &B);
	
	printf("write a number:");
	scanf("%d", &smaller);
	
	
	for(counter = 0; counter != B -1; counter++){
		
		printf("write a number:");
		scanf("%d", &N);
		
		
		if(smaller >= N ){
			
			smaller = N;
		}
		
	
	}
	
	printf("smaller: %d", smaller);
	
	return 0;
}