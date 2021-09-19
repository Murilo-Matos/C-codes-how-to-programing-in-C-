#include <stdio.h>
#include <math.h>

int main(void){
	double x;
	int y = 0;
	
	printf("\n\ntype it -1 to stop\n------------------------\n");
	printf("type it a number: ");
	scanf("%lf",&x);
	
	while(x != -1){
	    y = floor(x + .5);
	    printf("\nnumber typed\trounded number\n\n");
	    printf("%.2f\t\t%d", x,y);
		printf("\n\ntype it -1 to stop\n------------------------\n");
		printf("type it a number: ");
		scanf("%lf",&x);
	}
	
	
	
	return 0;
}