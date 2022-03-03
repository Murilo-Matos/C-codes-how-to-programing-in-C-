#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int way_function(void);
int square_function(void);
int pen_function(void);
int walker_function(void);
void print(int array_f[][50]);

int main(void){
	

	int x;
	int hold = 0;
	int qtd = 0;
	int contf = 0;
	int contw = 0;
	int y = 0;
	int contd = 0;
	int left = 0;
	int right = 0;

	srand(time(NULL));	
	
	int c[14] = {2, square_function(),3, pen_function(), square_function(), way_function(), pen_function(), 
					square_function(), way_function(), pen_function(), 
					square_function(), way_function(),6,9};
    int floor[50][50] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, 
						 {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, 
						 {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};
						 
	
	for(x = 0; x < 14; x++){
		printf("%d  ", c[x]);
	}
			 
	printf("\n");
	printf("\n");
	printf("\n");
 	  	
	for(x = 0; x < 14; x++){
		
		if(c[x] == 6 && x == 12){
			print(floor);
		}
		if(c[x] == 2 && contw % 2 == 0){
			qtd = c[x + 1];
			if(contd == 2 || contd == 3){
				if(qtd  >=  y){
					qtd = y;
					while(qtd >= 0){
						floor[contf][y] = 1;
						y--;
						qtd--;
					}
    				y = 0;
				}
				else{
					while(qtd >= 0){
						floor[contf][y] = 1;
						y--;
						qtd--;
					}
				}
			}
			else{
				qtd += y;
				if(qtd > 50){
					qtd = 50;
				}
				for(y = y; y < qtd; y++){
					floor[contf][y] = 1;
				}
				y--;
			}
			hold = contf;
			contf = y;
			y = hold;
		}
		else if(c[x] == 2 && contw % 2 != 0){
			qtd = c[x + 1];
			if(contd == 2 || contd == 3){
				if(qtd >= y){
					qtd = y;
					while(qtd >= 0){
						floor[y][contf] = 1;
						y--;
						qtd--;
					}
    				y = 0;
				}
				else{
					while(qtd >= 0){
						floor[y][contf] = 1;
						y--;
						qtd--;
					}
				}
			}
			else{
				qtd += y;
				if(qtd > 50){
					qtd = 50;
				}
				for(y = y; y < qtd; y++){
					floor[y][contf] = 1;
				}
			}
			hold = contf;
			contf = y;
			y = hold;
		}
		else if(c[x] == 1 && contw % 2 == 0){
			qtd = c[x + 1];
			if(contd == 2 || contd == 3){
				if(qtd  >=  y){
					qtd = y;
					while(qtd >= 0){
						floor[y][contf] = 0;
						y--;
						qtd--;
					}
    				y = 0;
				}
				else{
					while(qtd >= 0){
						floor[y][contf] = 0;
						y--;
						qtd--;
					}
				}
			}	
			else{
				qtd += y;
				if(qtd > 50){
					qtd = 50;
				}
				for(y = y; y < qtd; y++){
					floor[contf][y] = 0;
				}
			}
			hold = contf;
			contf = y;
			y = hold;			
		}
		else if(c[x] == 1 && contw % 2 != 0){
			qtd = c[x + 1];
			if(contd == 2 || contd == 3){
				if(qtd  >=  y){
					qtd = y;
					while(qtd >= 0){
						floor[y][contf] = 0;
						y--;
						qtd--;
					}
    				y = 0;
				}
				else{
					while(qtd >= 0){
						floor[y][contf] = 0;
						y--;
						qtd--;
					}
				}
			}
			else{
				qtd += y;
				if(qtd > 50){
					qtd = 50;
				}
				for(y = y; y < qtd; y++){
					floor[y][contf] = 0;
				}
			}
			hold = contf;
			contf = y;
			y = hold;
		}
		else if((c[x] == 3 && c[x + 1] == 1) || (c[x] == 3 && c[x + 1] == 2)){
			if(left == 1){
				contd = 1;
				left = 0; 
			}
			else{
				contd++;
			}
			contw++;
			right++;
		}
		else if((c[x] == 4 && c[x + 1] == 1) || (c[x] == 4 && c[x + 1] == 2)){
			if(right == 1){
				contd = 1;
				right = 0; 
			}
			else{
				contd++;
			}
			contw++;
			left++;
		}
		
	}

	return 0;
}

void print(int array_f[][50]){
	int x;
	int x_2;
	
	for(x = 0; x < 50; x++){
		for(x_2 = 0; x_2 < 50; x_2++){
			if(array_f[x][x_2] == 1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int way_function(void){
	int x = 0;
	
	x = 1 + rand() % 2;
	
	if( x == 1){
		return 3;
	}
	
	return 4;
}

int square_function(void){
	
	int result = 1 + rand() % 40;
	
	if(result <= 3){
		result = 4;
	}
	
	return result;
}

int pen_function(void){
	
	int x = 0;
	
	x = 1 + rand() % 2;
	
	if( x == 1){
		return 2;
	}
	
	return 1;
}