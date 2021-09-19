#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int ran(int result);

int main(void){
	srand(time(NULL));
	
	printf("\n\t%d\n", (1 + (rand() % 5))*2);
	
	printf("\n\t%d\n", (1 + (rand() % 5))*2 + 1);
	
	printf("\n\t%d\n", (0 + (rand() % 5))*4 + 6);
	
	return 0;
}


