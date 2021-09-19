#include<stdio.h>

int main (void)
{
	int m = 0;
	int m2 =0;
	int m3 = 0;
	int m4 = 0;
	int primeiro = 0;
	int segundo = 0;
	int terceiro = 0;
	int quarto = 0;
	int contador = 1;
	int n;
	
	while(contador <= 4)
	{
		printf("digite:");
		scanf("%d", &n);
		
		if(contador <= 2)
		{
			if( n >= m2)
			{
				m = m2;
				m2 = n;
			}
			else
			{
				m = n;
			}
		}
		else
			{
				if (n >= m4)
				{
					m3 = m4;
					m4 = n;
				}
				else
				{
					m3 = n;
				}
			}
		contador++;
	}
	
	if(m >= m3)
	{
		primeiro = m3;
		segundo = m;
	}	
	else
	{
		primeiro = m;
		segundo = m3;
	}
	if(m2 >= m4)
	{
		terceiro = m4;
		quarto = m2;
	}
	else
	{
		terceiro = m2;
		quarto = m4;
	} 
	
	printf("numeros:%d %d %d %d", primeiro, segundo, terceiro, quarto);
	
	return 0;
}