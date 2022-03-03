#include <stdio.h>



int main(void){
	
	int i;
	int n = 0;
	
	printf("\nPrime number from 1 to 1000\n");
	
	for (i = 0; i  <= 10000; i++){
		n = i;
		if (n % 2 != 0 || n == 2){
			if(n % 3 != 0 || n == 2|| n == 3 ){
				if(n % 5 != 0 || n == 2 || n == 3 || n == 5){
					if(n % 7 != 0  || n == 2 || n == 3 || n == 5|| n == 7){
						printf("\n%d\n",n);
		 		   }		
                }			
			}
		}
	}
	
	return 0;
}

