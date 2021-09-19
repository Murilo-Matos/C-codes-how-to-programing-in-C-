#include<stdio.h>

int main (void)
{
	int a;
	int i = 1, c;
	
	for(a = 1; a <= 10; a++)
	{
		if(a == 1)
		{
			while(i <= 55)//1º linha
		{
			printf("*");
			if (i == 1)
			{
				printf("\n");
			}
			else if(i == 3)
			{
				printf("\n");
			}
			else if(i == 6)
			{
				printf("\n");
			}
			else if(i == 10)
			{
				printf("\n");
			}
			else if(i == 15)
			{
				printf("\n");
			}
			else if(i == 21)
			{
				printf("\n");
			}
			else if(i == 28)
			{
				printf("\n");
			}
			else if(i == 36)
			{
				printf("\n");
			}
			else if(i == 45)
			{
				printf("\n");
			}
			else if(i == 55)
			{
				printf("\n");
			}
			i++;
		}
		}
		
		printf("\n");
		i = 1;
		
		if(a == 2)
		{
			while(i <= 10)//2º linha
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 9)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 8)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 7)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 6)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 5)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 4)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 3)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 2)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
			
			while(i <= 1)
			{
				printf("*");
				i++;
			}
			
			i = 1;
			printf("\n");
		}
		
		if(a == 3)
		{
			while(i <= 10)
			{
				printf("*");
				i++;
			}
			printf("\n");
			
			for(c = 1; c <= 10; c++)
			{
				if(i == 11)
			{
				printf("%2s","*");
				
				while(i <= 18)
				{
					printf("*");
					i++;
				}
				printf("\n");
			}
				else if(i == 19)
			{
				printf("%3s","*");
				
				while(i <= 25)
				{
					printf("*");
					i++;
				}
				printf("\n");
			}
			else if(i == 26)
			{
				printf("%4s","*");
				
				while(i <= 31)
				{
					printf("*");
					i++;
				}
				printf("\n");
			}
			else if(i == 32)
			{
				printf("%5s","*");
				
				while(i <= 36)
				{
					printf("*");
					i++;
				}
				printf("\n");
			}
			else if(i == 37)
			{
				printf("%6s","*");
				
				while(i <= 40)
				{
					printf("*");
					i++;
				}
				printf("\n");
			}
			else if(i == 41)
			{
				printf("%7s","*");
				
				while(i <= 43)
				{
					printf("*");
					i++;
				}
				printf("\n");
			}
			else if(i == 44)
			{
				printf("%8s","*");
				
				while(i <= 45)
				{
					printf("*");
					i++;
				}
				printf("\n");
			}
			else if(i == 46)
			{
				printf("%9s", "*");
				printf("*");
				i++;
				printf("\n");
				printf("%10s","*");
				printf("\n");
			}
			
			
		
			}
		}
		
		if(a == 4)
		{
			while(i <= 47)//4º linha
				
			{
				if(i == 1)
				   	{
						printf("%10s", "*");
						printf("\n");
				
						i++;
					}
				else if(i == 2)
				{
					printf("%9s", "*");
				
					while(i < 3)
					{
						printf("*");
						i++;
					}
				
					printf("\n");
			   	}
				else if(i == 3)
				{
					printf("%8s","*");
				
					while(i < 5)
					{
						printf("*");
						i++;
				   	}
				
					printf("\n");
				}
				else if(i == 5)
				{
					printf("%7s","*");
				
					while(i < 8)
					{
						printf("*");
						i++;
					}
				
					printf("\n");
				}
				else if(i == 8)
				{
					printf("%6s", "*");
				
					while(i < 12)
					{
						printf("*");
						i++;
					}
				
					printf("\n");
				}
				else if(i == 12)
				{
					printf("%5s", "*");
				
					while(i < 17)
					{
						printf("*");
						i++;
					}
				
					printf("\n");
				}
				else if(i == 17)
				{
					printf("%4s", "*");
				
					while(i < 23)
					{
						printf("*");
						i++;
					}
				
					printf("\n");
				}
				else if(i == 23)
				{
					printf("%3s", "*");
				
					while(i < 30)
					{
						printf("*");
						i++;
					}
				
					printf("\n");
				}
				else if(i == 30)
				{
					printf("%2s","*");
				
					while(i < 38)
					{
						printf("*");
						i++;
					}
				
					printf("\n");
				}
				else if(i == 38)
				{
					printf("%1s","*");
				
					while(i < 47)
					{
						printf("*");
						i++;
					}
				
					printf("\n");
				}
				
			}	
		}
	}
	
	   	return 0;
}

