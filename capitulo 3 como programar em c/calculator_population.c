#include<stdio.h> 

int main(void)
{
	 int  N;
	 int rate, np;
	 int cp;
	 int p;
	
	printf("type it time's amount, which you want know how much world population will grow, in years:");
	scanf("%d", &N);
	
	rate = 70;
	cp = 7700;
	np = rate * N;
	p = np + cp;
	
	printf("\nthe world population in %d", N);
	printf(" years is: %d \n billions", p);
	
	return 0;
}