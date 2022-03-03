#include <stdio.h>

int fibonacci(int number);

int main(void){
	
	int position = 0;
	int real_number = 0;
	
	printf("\nType it the position of the sequence fibonacci's number that ou want: ");
	scanf("%d", &position);
	
	real_number = fibonacci(position);
	
	printf("\nThis is the number: %d\n", real_number);
	
	return 0;
}

int fibonacci(int number){
	int c = 1;
	int result = 0;
	int x = 0;
	int y = 1;
	
	if(number == 1){
		return 0;
	}
	else if(number == 2){
		return 1;
	}
	else{
		number = number - 2;
		
		while(c <= number){
			result = x + y;
			x = y;
		 	y = result;
			c++;
		}
	}
	return result;
}