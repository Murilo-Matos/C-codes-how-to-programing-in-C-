#include <stdio.h>

int main(void){
	int x = 5;
	int y = 6;
	int a = 1;
	int b = 2;
	int g = 5;
	int i = 3;
	int j = 7;
	
	printf("\n1* teste\n---------------------------");
	if(!(x < 5) && !(y >= 7)){
		printf("\nok\n");
	}
	
	if(!(x < 5 || y >= 7)){
		printf("\nok\n");
	}
	printf("\n2* teste\n---------------------------");
	if(!(a == b) || !(g != 5)){
		printf("\nok\n");
	}
	
	if(!(a == b && g != 5)){
		printf("\nok\n");
	}
	printf("\n3* teste\n---------------------------");
	if (!(x <= 8) && !(y > 4)){
		printf("\nok\n");
	}
	else{
		printf("\nputs!\n");
	}
	if (!(x <= 8 || y > 4)){
		printf("\nok\n");
	}
	else{
		printf("\nputs!\n");
	}
	printf("\n4* teste\n---------------------------");
	if (!((i > 4) || (j <= 6))){
		printf("\nok\n");
	}
	if (!(i > 4 && j <= 6)){
		printf("\nok\n");
	}
	
	return 0;
}