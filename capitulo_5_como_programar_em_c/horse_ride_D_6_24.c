#include <stdio.h>

int compare_min(int p_1,int p_2, int vertical[],int size_v,int horizontal[],int size_h);

int main(void){
	
	int board[8][8] = {{2,3,4,4,4,4,3,2},{3,4,6,6,6,6,4,3},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{3,4,6,6,6,6,4,3},{2,3,4,4,4,4,3,2}};
	int board_2[8][8] = {{1,0},{0},{0},{0},{0},{0},{0},{0}};
	int v[8] = {10};
	int vertical[]   = {-1,-2,-2, -1,  1,  2, 2, 1};
	int horizontal[] = { 2, 1,-1, -2, -2, -1, 1, 2};
	int x = 0;
	int count_hide = 0;
	int value_1 = 0, value_2 = 0;
	int t, z;
	int t_2, z_2;
	int minimum = 10, position_1 = 0, position_2 = 0;
	int I = 1, R = 0, C = 0, R_2 = 0, C_2 = 0, X = 0; 
	
	for(t = 0; t < 8; t++){
		for(z = 0; z < 8; z++){
			
			for(t_2 = 0; t_2 < 8; t_2++){
				for(z_2 = 0; z_2 < 8; z_2++){
					if(t_2 == t && z_2 == z){
						board_2[t_2][z_2] = 1;
						board[t][z] -=1;
					}	
					else{
						board_2[t_2][z_2] = 0;						
					}
				}
			}	
			R = t;
			C = z;
			while(x != 64){
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
							else if(v[0] == minimum){
								value_1 = compare_min(position_1,position_2, vertical, 8, horizontal, 8);
								value_2 = compare_min(R,C, vertical, 8, horizontal, 8);
								if(value_2 < value_1){
							   		position_1 = R;
							   		position_2 = C;
								}
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
							else if(v[1] == minimum){
								value_1 = compare_min(position_1,position_2, vertical, 8, horizontal, 8);
								value_2 = compare_min(R,C, vertical, 8, horizontal, 8);
								if(value_2 < value_1){
							   		position_1 = R;
							   		position_2 = C;
								}
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
							else if(v[2] == minimum){
								value_1 = compare_min(position_1,position_2, vertical, 8, horizontal, 8);
								value_2 = compare_min(R,C, vertical, 8, horizontal, 8);
								if(value_2 < value_1){
							   		position_1 = R;
							   		position_2 = C;
								}
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
							else if(v[3] == minimum){
								value_1 = compare_min(position_1,position_2, vertical, 8, horizontal, 8);
								value_2 = compare_min(R,C, vertical, 8, horizontal, 8);
								if(value_2 < value_1){
							   		position_1 = R;
							   		position_2 = C;
								}
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
							else if(v[4] == minimum){
								value_1 = compare_min(position_1,position_2, vertical, 8, horizontal, 8);
								value_2 = compare_min(R,C, vertical, 8, horizontal, 8);
								if(value_2 < value_1){
							   		position_1 = R;
							   		position_2 = C;
								}
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
							else if(v[5] == minimum){
								value_1 = compare_min(position_1,position_2, vertical, 8, horizontal, 8);
								value_2 = compare_min(R,C, vertical, 8, horizontal, 8);
								if(value_2 < value_1){
							   		position_1 = R;
							   		position_2 = C;
								}
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
							else if(v[6] == minimum){
								value_1 = compare_min(position_1,position_2, vertical, 8, horizontal, 8);
								value_2 = compare_min(R,C, vertical, 8, horizontal, 8);
								if(value_2 < value_1){
							   		position_1 = R;
							   		position_2 = C;
								}
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
							else if(v[7] == minimum){
								value_1 = compare_min(position_1,position_2, vertical, 8, horizontal, 8);
								value_2 = compare_min(R,C, vertical, 8, horizontal, 8);
								if(value_2 < value_1){
							   		position_1 = R;
							   		position_2 = C;
								}
							}
						}
						C = C_2;
						R = R_2;
					}
				}
				C = C_2;
				R = R_2;
				I++;
				X++;
			}

			I = 1;
			X = 0;
			minimum = 10;
			//printf("%d", board[position_1][position_2] );
			board_2[position_1][position_2]  = x;
			R = position_1;
			C = position_2;
			R_2 = R;
			C_2 = C;
			x++;
			}			
			if(z == 0 && t == 0){
				for(t = 0; t < 8; t++){
					for(z = 0; z < 8; z++){
						printf("%d\t", board[t][z]);
					}			
					printf("\n");
				}
			}
			for(t_2 = 0; t_2 < 8; t_2++){
				for(z_2 = 0; z_2 < 8; z_2++){
					if(board[t_2][z_2]  != 2 && board[t_2][z_2] != 3 && board[t_2][z_2] != 4 && board[t_2][z_2] != 6 &&
 	 	 	 	 	   board[t_2][z_2] != 8){
	 	 	 	    	count_hide++;	
	     	 	 	    break;	   
					}
	  	  	    }
				if(count_hide != 0 ){
					break;
				}	
			}
			for(t_2 = 0; t_2 < 8; t_2++){
				if(t_2 == 0 || t_2 == 7){
					board[t_2][0] = 2;
					board[t_2][1] = 3;
					board[t_2][2] = 4;
					board[t_2][3] = 4;
					board[t_2][4] = 4;
					board[t_2][5] = 4;
					board[t_2][6] = 3;
					board[t_2][7] = 2;
	  	  	    }	
	  	  	    else if(t_2 == 1 || t_2 == 6){
					board[t_2][0] = 3;
					board[t_2][1] = 4;
					board[t_2][2] = 6;
					board[t_2][3] = 6;
					board[t_2][4] = 6;
					board[t_2][5] = 6;
					board[t_2][6] = 4;
					board[t_2][7] = 3;						
				}
	  	  	    else if(t_2 == 2 || t_2 == 5 || t_2 == 3 || t_2 == 4){
					board[t_2][0] = 4;
					board[t_2][1] = 6;
					board[t_2][2] = 8;
					board[t_2][3] = 8;
					board[t_2][4] = 8;
					board[t_2][5] = 8;
					board[t_2][6] = 6;
					board[t_2][7] = 4;						
				}
			}	
	    }	
	}
	
	printf("\nPasseio completo: %d\n", count_hide);
	printf("\nPasseio incompleto: %d\n", 64 - count_hide);
	
	return 0;
}

int compare_min(int p_1,int p_2,int vertical[],int size_v,int horizontal[],int size_h){

	int board[8][8] = {{2,3,4,4,4,4,3,2},{3,4,6,6,6,6,4,3},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{4,6,8,8,8,8,6,4},{3,4,6,6,6,6,4,3},{2,3,4,4,4,4,3,2}};
	int I = 1, R = 0, C = 0, R_2 = 0, C_2 = 0, X = 0; 
	int minimum = 0;
	int position_1 = 0, position_2 = 0;
	int v[8] = {10};
		
	while(X != 8){
   	   	R += vertical[X];
		C += horizontal[X];

		if(R > 7 || C > 7 || R < 0 || C < 0){
 	   		C = C_2;
	  	   	R = R_2;
		}
		else{
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
		C = C_2;
		R = R_2;
		I++;
		X++;
	}
	return minimum;
}