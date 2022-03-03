#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int values_1(int array_1[], int size_1);
int values_2(int array_2[], int size_2);
int values_3(int array_3[], int size_3);
int values_4(int array_4[], int size_4);
int values_5(int array_5[], int size_5);
int types_of_products(int a,int array[],int size);


int main(void){
	
	int x, y;
	int products_1[50] =  {0};
	int products_2[70] =  {0};
	int products_3[100] = {0};
	int products_4[110] = {0};
	int sales[5][4];
	
	srand(time(NULL));
	
	for(x = 0; x < 50; x++){
		products_1[x] = 1 + rand() % 5;
	}
	for(x = 0; x < 70; x++){
		products_2[x] = 1 + rand() % 5;
	}
	for(x = 0; x < 100; x++){
		products_3[x] = 1 + rand() % 5;
	}
	for(x = 0; x < 110; x++){
		products_4[x] = 1 + rand() % 5;
	}
	
	for(x = 0; x < 5; x++)
	{
		for(y = 0; y < 4; y++){
			if(y == 0){
				sales[x][y] = types_of_products(x, products_1, 50);
			}
			else if(y == 1){
				sales[x][y] = types_of_products(x, products_2, 70);
			}
			else if(y == 2){
				sales[x][y] = types_of_products(x, products_3, 100);
			}
			else if(y == 3){
				sales[x][y] = types_of_products(x, products_4, 110);
			}
		}
	}
	
	printf("\t\t        seller 1\tseller 2\tseller 3\tseller 4\n\n");
	for(x = 0; x < 5; x++){
		if(x == 0){
			printf("product 1\t\t");
			for(y = 0; y < 4; y++){
				printf("%d\t\t", sales[x][y]);
					}			
			printf("\n");				
		}
		if(x == 1){
			printf("product 2\t\t");
			for(y = 0; y < 4; y++){
				printf("%d\t\t", sales[x][y]);
					}			
			printf("\n");				
		}
		if(x == 2){
			printf("product 3\t\t");
			for(y = 0; y < 4; y++){
				printf("%d\t\t", sales[x][y]);
					}			
			printf("\n");				
		}
		if(x == 3){
			printf("product 4\t\t");
			for(y = 0; y < 4; y++){
				printf("%d\t\t", sales[x][y]);
					}			
			printf("\n");				
		}
		if(x == 4){
			printf("product 5\t\t");
			for(y = 0; y < 4; y++){
				printf("%d\t\t", sales[x][y]);
					}			
			printf("\n");				
		}
		
	}	
	
	
	return 0;
}

int values_1(int array_1[],int size_1){
	int count;
	int sum = 0;
	
	for(count = 0; count < size_1; count++){
		if(array_1[count] == 1){
			sum++;
		}
	}
	return sum;
}

int values_2(int array_2[],int size_2){
	int count;
	int sum = 0;
	
	for(count = 0; count < size_2; count++){
		if(array_2[count] == 2){
			sum++;
		}
	}
	return sum;
}

int values_3(int array_3[],int size_3){
	int count;
	int sum = 0;
	
	for(count = 0; count < size_3; count++){
		if(array_3[count] == 3){
			sum++;
		}
	}
	return sum;
}

int values_4(int array_4[],int size_4){
	int count;
	int sum = 0;
	
	for(count = 0; count < size_4; count++){
		if(array_4[count] == 4){
			sum++;
		}
	}
	return sum;
}

int values_5(int array_5[],int size_5){
	int count;
	int sum = 0;
	
	for(count = 0; count < size_5; count++){
		if(array_5[count] == 5){
			sum++;
		}
	}
	return sum;
}

int types_of_products(int a,int array[],int size){
	
	if(a == 0){
		return values_1(array, size);
	}
	else if(a == 1){
		return values_2(array, size);
	}
	else if(a == 2){
		return values_3(array, size);
	}
	else if(a == 3){
		return values_4(array, size);
	}
	else if(a == 4){
		return values_5(array, size);
	}
	return 0;
}