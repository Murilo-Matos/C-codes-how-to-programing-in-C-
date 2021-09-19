#include<stdio.h> 

int main(void)
{
	int nota;
	int aCount;
	int bCount;
	int cCount;
	int dCount;
	int fCount;
	
	printf("Digite as notas em letra.\n");
	printf("Digite o caractere EOF para encerrar a entrada.\n");
	
	while(( nota = getchar()) != EOF ){
		
		switch ( nota ){
			
			case 'A':
			case 'a':
				++aCount;
				break;
			
			case 'B':
			case 'b':
				++aCount;
				break;
			
			case 'C':
			case 'c':
				++cCount;
				break;
			
			case 'D':
			case 'd':
				++dCount;
				break;
			
			case 'F':
			case 'f':
				++fCount;
				break;
			
			case '\n':
			case '\t':
			case ' ':
				break;
			
			default:
				printf("Letra de nota incorreta.");
				printf("Digite nova nota.\n");
				break;
			
			printf("\nTotais para cada nota são:\n");
			printf("A: %d\n", aCount);
			printf("B: %d\n", bCount);
			printf("C: %d\n", cCount);
			printf("D: %d\n", dCount);
			printf("F: %d\n", fCount);
					
					
		
		}
	}
return 0 ;}