#include<stdio.h> 

void useLocal (void);
void useStaticLocal (void);
void useGlobal (void);

int x = 1;

int main(void)
{
	int x = 5;
	
	printf("x local no escopo externo de main e %d\n", x);
	
	{
		int x = 7;
		
		printf("x local no esco� interno de main e %d\n", x);
	}
	
	printf("x local no escopo interno de main e %d\n", x);
	
	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();
	
	printf("\nx local em main e %d\n", x);
	
	return 0;
}

void useLocal(void)
{
	int x = 25;
	
	printf("\nx local em useLocal e %d ap�s entrar em useLocal\n", x);
	x++;
	printf("x local em UseLocal e %d antes de sair de useLocal\n", x);
}

void useStaticLocal(void)
{
	static int x = 50;
	
	printf("\nx estatica e %d na esntrada de useStationLocal\n", x);
	x++;
	printf("x estatica local e %d na saida de useStaticLocal\n", x);
}

void useGlobal(void)
{
	printf("\nx global e %d na entrada de useGlobal\n", x);
	x*= 10;
	printf("x global e %d na saida de useGlobal\n", x);
}