#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int hide(int X, int R, int C, int v[],int size_v, int h[], int size_h, int R_2, int C_2, int I);

int board[8][8] = {{0},{0},{0},{0,0,0,0,1},{0},{0},{0},{0}};

int main(void){
	
	int c = 4;
	int r = 3;
	int c_2 = 4;
	int r_2 = 3;
	int i = 2;
	int t = 0;
	int x = 0;
	int y = 2;
	int z = 0;
	int verifica = 0;

	int vertical[]   = {-1, -2, -2, -1, 1, 2, 2, 1};
	int horizontal[] = {2, 1, -1, -2, -2, -1, 1, 2};
	
	/*for(x= 0; x< 8; x++){
		for(y = 0; y < 8; y++){
			printf("%d", board[x][y]);
			
		}
		printf("\n");
	}*/
	
	srand(time(NULL));	
		
	while(i != 65){
		i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	

		if(i == 0){
			break;
		}
		for(t= 0; t< 8; t++){
			for(z = 0; z < 8; z++){
				if(board[t][z] == y){
					c_2 = z;
					r_2 = t;
					y++;
					c = c_2;
					r = r_2;
					x = 0;
					verifica++;
					break;
				}
		    }	
			if(verifica != 0){
				verifica = 0;
				break;
			}	
	    }	
    }	
	
	for(x= 0; x< 8; x++){
		for(y = 0; y < 8; y++){
			printf("%d\t", board[x][y]);
			
		}
		printf("\n");	
	}
	return 0;
}

int hide(int X, int R, int C, int v[],int size_v, int h[], int size_h, int R_2, int C_2, int I){

		X = 1 + rand() %7;
		
		R += v[X];
		C += h[X];

		if(R > 7 || C > 7 || R < 0 || C < 0){
			C = C_2;
			R = R_2;
			I = 0;
			return I;
		}
		else{
			if(board[R][C] == 0){
				board[R][C] = I;
				C = C_2;
				R = R_2;
				I++;
			}
		}
		X++;
	
	return I;	
}