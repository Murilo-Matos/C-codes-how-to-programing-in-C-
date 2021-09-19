#include<stdio.h>

int main(void)
{
	int B, total = 0, counter = 0;
	
	
	for (B = 0 ; B != 9999; counter++){
		
	
		printf(" write a number(9999 for stop):");
		scanf("%d", &B);
		total += B;
		
		if(B == 9999){
			break;
		}
		
	}
	

	printf("%d", counter);
	total = total - 9999;	
	total = total / counter;
	
	printf("\nthe average is: %d\n", total);
	
	return 0;
}