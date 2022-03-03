#include <stdio.h>

int main(void){
	
	int board[8][8] = {{1,3,4,4,4,4,3,2},{3,4,6,6,6,6,4,3},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{3,4,6,6,6,6,4,3},{2,3,4,4,4,4,3,2}};
	int board_2[8][8] = {{1,0},{0},{0},{0},{0},{0},{0},{0}};
	int v[8] = {10};
	int vertical[]   = {-1,-2,-2, -1,  1,  2, 2, 1};
	int horizontal[] = { 2, 1,-1, -2, -2, -1, 1, 2};
	int x = 2;
	int count_hide = 0;
	int t, z;
	int minimum = 10, position_1 = 0, position_2 = 0;
	int I = 1, R = 0, C = 0, R_2 = 0, C_2 = 0, X = 0; 
	
	
	while(x != 61){
		while(X != 8){
			R += vertical[X];
	  	    C += horizontal[X];

			if(R > 7 || C > 7 || R < 0 || C < 0){
				C = C_2;
				R = R_2;
			}
			else{
				if(board_2[R][C] == 0){
					if(I == 1){
						v[0] = board[R][C];
						board[R][C] -=1;
						if(v[0] < minimum){
							minimum = v[0];
							position_1 = R;
							position_2 = C;
						}
					}
					else if(I == 2){
						v[1] = board[R][C];
						board[R][C] -=1;
						if(v[1] < minimum){
						   	minimum = v[1];
						   	position_1 = R;
						   	position_2 = C;
						}
					}
					else if(I == 3){
						v[2] = board[R][C];
						board[R][C] -=1;
						if(v[2] < minimum){
						   	minimum = v[2];
						   	position_1 = R;
						   	position_2 = C;
						}
					}
					else if(I == 4){
						v[3] = board[R][C];
						board[R][C] -=1;
						if(v[3] < minimum){
						   	minimum = v[3];
						   	position_1 = R;
						   	position_2 = C;
						}
					}
					else if(I == 5){
						v[4] = board[R][C];
						board[R][C] -=1;
						if(v[4] < minimum){
						   	minimum = v[4];
						   	position_1 = R;
						   	position_2 = C;
						}
					}
					else if(I == 6){
						v[5] = board[R][C];
						board[R][C] -=1;
						if(v[5] < minimum){
						   	minimum = v[5];
						   	position_1 = R;
						   	position_2 = C;
						}
					}
					else if(I == 7){
						v[6] = board[R][C];
						board[R][C] -=1;
						if(v[6] < minimum){
						   	minimum = v[6];
						   	position_1 = R;
						   	position_2 = C;
						}
					}
					else if(I == 8){
						v[7] = board[R][C];
						board[R][C] -=1;
						if(v[7] < minimum){
						   	minimum = v[7];
						   	position_1 = R;
						   	position_2 = C;
						}
					}
					C = C_2;
					R = R_2;
				}
			}
			C = C_2;
			R = R_2;
    		if(x == 17){
				printf("P1P2: %d %d\n", position_1,position_2);
				printf("RC: %d %d\n", R,C);				  
				printf("R2C2: %d %d\n\n", R_2,C_2);	
			}
			I++;
			X++;
		}
 
		I = 1;
		X = 0;
		minimum = 10;
		//printf("%d", board[position_1][position_2] );
		board[position_1][position_2] -= 1;
		board_2[position_1][position_2]  = x;
		R = position_1;
		C = position_2;
		R_2 = R;
		C_2 = C;
		x++;
	}
	
	for(t = 0; t < 8; t++){
		for(z = 0; z < 8; z++){
			printf("%d\t", board[t][z]);
		}	
		printf("\n");
	}
	
	if(count_hide == 64){
		printf("\nPasseio completo!\n");
	}
	else{
		printf("\nPasseio incompleto!\n");		
	}
	
	return 0;
}