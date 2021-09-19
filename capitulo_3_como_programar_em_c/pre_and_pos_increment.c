#include <stdio.h>

int main (void)
{
	int x;
	
	printf("type it x:");
	scanf("%d", &x);
	
	printf("firsting don't alteration the value of x: %d\n", x--);
	printf("now, the value of x is showed: %d\n", x);
	
	--x;
	
	printf("in this case the value of x is showed before his used: %d", x);
	
	return 0;
}