#include <stdio.h>
#include <math.h>

int main(void){
	int x = 10/2;
	int i = 1;
	int ok = 0;
	
	printf("\nn == 10\n");
	
	while(i <= x)
	{
		if(x%i!=0){
			ok = 0;
		}
		else{
			return printf("\nn nao e primo\n");
		}
		i++;
	}
	
	if(ok == 0){
		printf("\nn e primo\n");
	}
	
	
	return 0;
}