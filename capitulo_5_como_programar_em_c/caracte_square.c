#include <stdio.h>

void square(int side, char character);

int main(void){
	int x;
	char y;
	

	printf("type it a character: ");
	scanf("%s",&y);
	printf("type it the side of square: ");
	scanf("%d",&x);
	printf("\n");
	
	
	
	square(x,y);
	
	return 0;
}


void square(int side, char character){
	
	int i = 1;
	int a = 1;
	
	while(i <= side){
		a = 1;
		while(a <= side){
			printf("%c",character);
			a++;
		}
		i++;
		printf("\n");
	}
	
}