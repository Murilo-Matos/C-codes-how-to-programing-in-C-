#include <stdio.h>

int main(void){
	
	int x = 0;
	
	printf("\ntype it our grade: ");
	scanf("%d", &x);
	
	if((x < 100 && x > 90) || x == 100 || x == 90){
		printf("\n4\n");
	}
	else if((x < 89 && x > 80) || x == 89 || x == 80){
		printf("\n3\n");
	}
	else if((x < 79 && x > 70) || x == 79 || x == 70){
		printf("\n2\n");
	}
	else if((x < 69 && x > 60) || x == 69 || x == 60){
		printf("\n1\n");
	}
	else if(x < 60){
		printf("0");
	}
	else{
		printf("\nthis input isn't aceitable\n");
	}
	
	return 0;
}

