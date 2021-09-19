#include<stdio.h> 

int main(void)
{
	char string1[20];
	char string2[] = "string literal";
	int i;
	
	printf("digite uma string:");
	scanf("%s", string1);
	
	
	printf("string1 e: %s\nstring2 is: %s\n"
   	   	   "string1 com espaços entre caracteres e:\n",
			string1, string2);
			
	for(i = 0; string1[i] != '\0'; i++)
	{
		printf("%c ", string1[i]);
	}
	
	printf("\n");
	return 0;		
	
}