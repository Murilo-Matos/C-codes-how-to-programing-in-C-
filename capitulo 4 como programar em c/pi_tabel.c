#include <stdio.h>

int main(void)
{
	float C   = 4;
	float pi_1  = 3.14;
	float pi_2  = 3.141;
	float pi_3  = 3.1415;
	float pi_4  = 3.14159;
	float pi    = 3.141592;
	float C_d = 3;
	int C_i = 1;
	
	 while( C != pi){
		
		if(C == pi){
			printf("PI\t\t\tTermo da serie\n");

			printf("%.2f\t\t\t%d\n", pi, C_i );
		} 
		else if(C == pi_1){
			printf("PI\t\t\tTermo da serie\n");

			printf("%.2f\t\t\t%d\n", pi_1, C_i );
		}
		else if(C == pi_2){
			printf("PI\t\t\tTermo da serie\n");

			printf("%.2f\t\t\t%d\n", pi_2, C_i );
		}
		else if(C == pi_3){
			printf("PI\t\t\tTermo da serie\n");

			printf("%.2f\t\t\t%d\n", pi_3, C_i );
		}
		else if(C == pi_4){
			printf("PI\t\t\tTermo da serie\n");

			printf("%.2f\t\t\t%d\n", pi_4, C_i );
		}
		if(C_i % 2 == 0){
			C = C + 4/C_d;
		}
		else{
			C = C - 4/C_d;
		}
		C_i++;
		C_d+= 2;
	}
	
	return 0;
}