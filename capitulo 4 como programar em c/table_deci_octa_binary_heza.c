#include<stdio.h>

int main(void)
{
	int a, B1,B2,B3,B4,B5,B6,B7,B8,B9;
	int  A1, A2, A3, A4, A5, A6, A7, A8, A9;
	int C1, D1, C2, D2, C3, D3;
	int N1,N2,N3, F1,F2,F3;
	

	printf("%10s%10s%17s%10s\n", "decimal", "binary", "octal", "hexa");

	for(a = 1; a <= 256; a++)
	{
		
		A1 = a / 2;
		B1 = a % 2;
		A2 = A1 / 2;
		B2 = A1 % 2;
		A3 = A2 / 2;
		B3 = A2 % 2;
		A4 = A3 / 2;
		B4 = A3 % 2;
		A5 = A4 / 2;
		B5 = A4 % 2;
		A6 = A5 / 2;
		B6 = A5 % 2;
		A7 = A6 / 2;
		B7 = A6 % 2;
		A8 = A7 / 2;
		B8 = A7 % 2;
		A9 = A8 / 2;
		B9 = A8 % 2;
		
		C1 = a / 8;
		D1 = a % 8;
		C2 = C1 / 8;
		D2 = C1 % 8;
		C3 = C2 / 8;
		D3 = C2 % 8;
		
		F1 = a / 16;
		N1 = a % 16;
		F2 = F1 / 16;
		N2 = F1 % 16;
		F3 = F2 / 16;
		N3 = F2 % 16;
		
		if(N1 == 10)
		{
			printf("%5d%10d%d%d%d%d%d%d%d%d%10d%d%d%10d%d%s\n",a,B9,B8,B7,B6,B5,B4,B3,B2,B1,D3,D2,D1,N3,N2,"A");
		}
		else if(N1 == 11)
		{
			printf("%5d%10d%d%d%d%d%d%d%d%d%10d%d%d%10d%d%s\n",a,B9,B8,B7,B6,B5,B4,B3,B2,B1,D3,D2,D1,N3,N2,"B");
		}
		else if(N1 == 12)
		{
			printf("%5d%10d%d%d%d%d%d%d%d%d%10d%d%d%10d%d%s\n",a,B9,B8,B7,B6,B5,B4,B3,B2,B1,D3,D2,D1,N3,N2,"C");	
		}
		else if(N1 == 13)
		{
			printf("%5d%10d%d%d%d%d%d%d%d%d%10d%d%d%10d%d%s\n",a,B9,B8,B7,B6,B5,B4,B3,B2,B1,D3,D2,D1,N3,N2,"D");	
		}
		else if(N1 == 14)
		{
			printf("%5d%10d%d%d%d%d%d%d%d%d%10d%d%d%10d%d%s\n",a,B9,B8,B7,B6,B5,B4,B3,B2,B1,D3,D2,D1,N3,N2,"E");	
		}
		else if(N1 == 15)
		{
			printf("%5d%10d%d%d%d%d%d%d%d%d%10d%d%d%10d%d%s\n",a,B9,B8,B7,B6,B5,B4,B3,B2,B1,D3,D2,D1,N3,N2,"F");	
		}
		else
		{
			printf("%5d%10d%d%d%d%d%d%d%d%d%10d%d%d%10d%d%d\n",a,B9,B8,B7,B6,B5,B4,B3,B2,B1,D3,D2,D1,N3,N2,N1);	
		}
	}



	return 0;
}
