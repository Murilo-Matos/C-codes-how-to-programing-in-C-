#include <stdio.h>

int main(void){
	int count = 1;

	while(count <= 19){
		if(count == 1 || count == 19){
			printf("     *\n\n");
		}
		else if(count == 3 || count == 15){
			printf("    ***\n\n");
		}
		else if(count == 5 || count == 13){
			printf("   *****\n\n");
		}
		else if(count == 7 || count == 11){
			printf("  *******\n\n");
		}
		else if(count == 9){
			printf(" *********\n\n");
		}
		count +=2;
	}
	return 0;
}