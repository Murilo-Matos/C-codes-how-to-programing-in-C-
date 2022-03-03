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
	int count_mil = 0;

	int count_hides[1000] = {0};
	int vertical[]   = {-1, -2, -2, -1, 1, 2, 2, 1};
	int horizontal[] = {2, 1, -1, -2, -2, -1, 1, 2};
	
	/*for(x= 0; x< 8; x++){
		for(y = 0; y < 8; y++){
			printf("%d", board[x][y]);
			
		}
		printf("\n");
	}*/
	
	srand(time(NULL));	
	
	while(count_mil < 1000){
		while(i != x){
  		    x = i;
  		    //printf("\nx = %d",x);
			i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
			if(i == x){
				i = hide(x,r,c,vertical,8, horizontal,8, r_2, c_2, i);	
			}
  	        //printf("%d\n",  i);

			//printf("(%d\n",  i);
			for(t= 0; t< 8; t++){
				for(z = 0; z < 8; z++){
					if(board[t][z] == y){
						c_2 = z;
						r_2 = t;
						y++;
						c = c_2;
						r = r_2;
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
        i -=1;
		count_hides[count_mil] = i;	
		if(i >= 62){
			printf("\n*%d*\n\n", count_mil);
			break;
		}
		//printf("*%d\n",  i);
		x = 0;
		i = 2;
		c = 4;
		r = 3;
		c_2 = 4;
		r_2 = 3;
		y=2;
		for(t= 0; t < 8; t++){
			for(z = 0; z < 8; z++){
				board[t][z] = 0;
  	        }	
        }
		count_mil++;		
	}	
	
	for(x= 0; x< 1000; x++){
		printf("%d		", count_hides[x]);
		if(x == 10){
			printf("\n");	
		}
	}
	
	return 0;
}

int hide(int X, int R, int C, int v[],int size_v, int h[], int size_h, int R_2, int C_2, int I){
	
		X = 1 + rand() %7;
		//printf("\n%d",X);
		R += v[X];
		C += h[X];
		//printf("\n----%d", R);
		//printf("\n----%d", C);
		if(R > 7 || C > 7 || R < 0 || C < 0){
			while(R > 7){
				R = R_2;
				X = 1 + rand() %7;
				R += v[X];
			}
			while(R < 0){
				R = R_2;
				X = 1 + rand() %7;
				R += v[X];
			}
			while(C > 7){
				C = C_2;
				X = 1 + rand() %7;
				C += h[X];
			}
			while(C < 0){
				C = C_2;
				X = 1 + rand() %7;
				C += h[X];
			}
			if(board[R][C] == 0){
				board[R][C] = I;
				C = C_2;
				R = R_2;
				I++;
			}
		}
		else{
			if(board[R][C] == 0 ){
				board[R][C] = I;
				C = C_2;
				R = R_2;
				I++;
			}
		}
	
	return I;	
}