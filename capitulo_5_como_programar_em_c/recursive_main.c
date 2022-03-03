#include <stdio.h>

int main(void){
	
	int static count = 1;
	
	printf("count: %d", count);
	
	count++;
	
	main();
	
	return 0;
}