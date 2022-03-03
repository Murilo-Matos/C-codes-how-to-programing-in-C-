#include<stdio.h>

void canvas(int x);

int main(void){
	
	int x;
	
	printf("choose:\n");
	printf("1 -> a circle\n");
	printf("2 -> a square");
	printf("\n3 -> a triangle\n");
	printf("\ntype it one of above numbers: ");
	scanf("%d", &x);
	
	canvas(x);
	return 0;
}

void canvas(int x){
	
	printf("\n");
		
	if(x == 1){
		int p = 1;
		
		while(p <= 8){
			int count = 1;
			int count_2 = 1;
			
			if(p == 1 || p == 8){
				
				while(count <= 8){
					printf(" ");
					count++;
				}
				while(count_2 <= 5){
					printf("*");
					count_2++;
				}
			}
			else if(p == 2 || p == 7){
				
				while(count <= 6){
					printf(" ");
					count++;
				}
				while(count_2 <= 9){
					printf("*");
					count_2++;
				}
			}
			else if(p == 3 || p == 6){
				
				while(count <= 5){
					printf(" ");
					count++;
				}
				while(count_2 <= 11){
					printf("*");
					count_2++;
				}
			}
			else if(p == 4 || p == 5){
				
				while(count <= 4){
					printf(" ");
					count++;
				}
				while(count_2 <= 13){
					printf("*");
					count_2++;
				}
			}
			p++;
			printf("\n");
		}
	}
	else if(x == 2){
		int i = 1;
		int a = 1;
		while(i <= 4){
			a = 1;
			while(a <= 4){
			   	printf("*");
				a++;
			}
			i++;
			printf("\n");
		}
	}
	else if(x == 3){
		printf("*\n");
		printf("**\n");
		printf("***\n");
		printf("****\n");
		printf("*****\n");
	}
	
}