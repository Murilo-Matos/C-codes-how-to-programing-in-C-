#include<stdio.h>
#include<math.h>

int MDC_1(int first, int second);
int MDC_2(int f_2,int s_2,int f_3,int s_3,int f_5,int s_5,int f_7,int s_7,int f_11,int s_11);


int main(void){
	
	int x = 0;
	int y = 0;
	int final_value = 0;
	
	printf("*************************\nCALCULATOR OF MCD\n*************************\n");
	
	printf("\ntype it a number: ");
	scanf("%d", &x);
	printf("\ntype it other number: ");
	scanf("%d", &y);
	
	final_value = MDC_1(x,y);
	
	printf("\nthe mdc of these numbers are: %d\n",final_value);
	
	return 0;
}


int MDC_1(int first, int second){
	
	int i = 0, df_2 = 0, df_3 = 0, df_5 = 0, df_7 = 0, df_11 = 0;
	int ds_2 = 0, ds_3 = 0, ds_5 = 0, ds_7 = 0, ds_11 = 0;
	int mdc = 0;
	int n_1 = first, n_2 = second;
	
	while(i != 1){
		if(n_1 % 2 == 0){
			i = n_1 / 2;
			n_1 = i;
			df_2++;
		}
		else if(n_1 % 3 == 0){
			i = n_1 / 3;
			n_1 = i;
			df_3++;
		}
		else if(n_1 % 5 == 0){
			i = n_1 / 5;
			n_1 = i;
			df_5++;
		}
		else if(n_1 % 7 == 0){
			i = n_1 / 7;
			n_1 = i;
			df_7++;
		}
		else if(n_1 % 11 == 0){
			i = n_1 / 11;
			n_1 = i;
			df_11++;
		}
		else{
			i = 1;
		}
	}
	
	i = 0;
	
	while(i != 1){
		if(n_2 % 2 == 0){
			i = n_2 / 2;
			n_2 = i;
			ds_2++;
		}
		else if(n_2 % 3 == 0){
			i = n_2 / 3;
			n_2 = i;
			ds_3++;
		}
		else if(n_2 % 5 == 0){
			i = n_2 / 5;
			n_2 = i;
			ds_5++;
		}
		else if(n_2 % 7 == 0){
			i = n_2 / 7;
			n_2 = i;
			ds_7++;
		}
		else if(n_2 % 11 == 0){
			i = n_2 / 11;
			n_2 = i;
			ds_11++;
		}
		else{
			i = 1;
		}
	}
	mdc  = MDC_2(df_2, ds_2, df_3, ds_3, df_5, ds_5, df_7, ds_7, df_11, ds_11);
	
	return mdc;
}

int MDC_2(f_2, s_2, f_3, s_3, f_5, s_5, f_7, s_7, f_11, s_11){
	
	int result = 1;
	int cont = 0;

	if(f_2 != 0 && s_2 != 0){
    	if(f_2 == s_2){
			result = pow(2, s_2);
		}
		else if(f_2 < s_2){
			result = pow(2,f_2);
		}
		else{
			result = pow(2,s_2);
		}
		cont++;
	}
//------------------------------------------------------------------------------
	if(f_3 != 0 && s_3 != 0){
    	if(f_3 == s_3){
			result *= pow(3, s_3);
		}
		else if(f_2 < s_2){
			result *= pow(3,f_3);
		}
		else{
			result = pow(3,s_3);
		}
		cont++;
	}
//------------------------------------------------------------------------------
	if(f_5 != 0 && s_5 != 0){
    	if(f_5 == s_5){
			result *= pow(5, s_5);
		}
		else if(f_2 < s_2){
			result *= pow(5,f_5);
		}
		else{
			result *= pow(5,s_5);
		}
		cont++;
	}
//------------------------------------------------------------------------------
	if(f_7 != 0 && s_7 != 0){
    	if(f_7 == s_7){
			result *= pow(7, s_7);
		}
		else if(f_7 < s_7){
			result *= pow(7,f_7);
		}
		else{
			result *= pow(7,s_7);
		}
		cont++;
	}
//------------------------------------------------------------------------------
	if(f_11 != 0 && s_11 != 0){
    	if(f_11 == s_11){
			result *= pow(11, s_11);
		}
		else if(f_11 < s_11){
			result *= pow(11,f_11);
		}
		else{
			result *= pow(11,s_11);
		}
		cont++;
	}
	if(cont == 0){
		result = 1;
	}

//------------------------------------------------------------------------------
	
	return result;
}

