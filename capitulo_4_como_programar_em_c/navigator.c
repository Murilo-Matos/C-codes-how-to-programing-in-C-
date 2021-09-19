#include<stdio.h>

int main(void)
{
	int  element [4][8] = {{1 ,2 ,3 ,4 ,5 ,6 ,7 ,8},
	                      {30,0 ,9 ,0 ,0 ,0 ,0 ,0},
					      {40,0 ,0 ,0 ,30,0 ,11,0},
					      {50,0 ,0 ,0 ,9 ,0 ,12,0}};
					      
	int i,j;
	
		//1º linha da tabela
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 8; j++)
		{
			if(element[i][j] == 0)
				{
					element[i][j] = 0;
				}
			
			else if(element[i][j] == 9)
				{
					j++;
					element[i][j] = 200;
					printf("\nnavigator.");
					j--;
				}
			
			else if(element[i][j] == 30)
				{
					j++;
					element[i][j] = 200;
					j--;
				}
			else if(element[i][j] == 40)
				{
					j++;
					element[i][j] = 200;
					j--;
				}	
				
			else if(element[i][j] == 50)
				{
					j++;
					element[i][j] = 200;
					j--;
				}
						
			else if(element[i][j] == 11)
				{
					j++;
					element[i][j] = 400;
					printf("plugins\n");
					j--;
				}
				
			else if(element[i][j] == 12)
				{
					j++;
					element[i][j] = 500;
					printf("appcodename\n");
					j--;
				}
				
				else if(element[i][j] == 10)
				{
					j++;
					element[i][j] = 300;
					j--;
				}						
		}
	}	
	
		
				
		
	return 0;
							   				   									
}