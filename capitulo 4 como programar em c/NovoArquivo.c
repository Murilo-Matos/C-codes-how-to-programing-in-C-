#include<stdio.h>

int main(void)
{
	int A = 256, B1,B2,B3,B4,B5,B6,B7,B8,B9;
	int A1, A2, A3, A4, A5, A6, A7, A8, A9;
	
	printf("%5s%10s\n","decimal","binary");
	
	
		A1 = A/ 2;
		B1 = A % 2;
		A2 = A1 / 2;
		B2 = A1 % 2;
		A3 = A2 / 2;
		B3 = A2 % 2;
		A4 = A3 / 2;
		B4 = A3 % 2;
		A5 = A4 / 2;
		B5 = B4 % 2;
		A6 = A5 / 2;
		B6 = B5 % 2;
		A7 = A6 / 2;
		B7 = A6 % 2;
		A8 = A7 / 2;
		B8 = B7 % 2;
		A9 = A8 / 2;
		B9 = A8 % 2;
		
		printf("%-5d%7d%d%d%d%d%d%d%d%d\n", A,B9,B1,B2,B3,B4,B5,B6,B7,B8);
		
		return 0;
}