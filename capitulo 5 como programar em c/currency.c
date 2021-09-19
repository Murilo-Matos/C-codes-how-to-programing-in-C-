#include<stdio.h>
#include<stdlib.h>

int flip(void);

int main(void){
	
	int count = 1;
	int x = 0;
	int face = 0;
	int crown = 0;
	
	while(count <= 100){
		x = flip();
		if(x == 0){
			face++;
		}
		else{
			crown++;
		}
		count++;
	}
	
	printf("\nface: %d\n", face);
	printf("\ncrown: %d\n", crown);
	
	return 0;
}

int flip(void){
	
	return rand() % 2;

}