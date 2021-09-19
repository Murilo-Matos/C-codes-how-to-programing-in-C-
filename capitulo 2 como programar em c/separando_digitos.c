#include <stdio.h>

int  main (void)

{
	int numero;
	int a;
	int bb, b;
	int cc, c;
	int dd, d;
	int ee, e;
	
	printf("digite um numero de 5 algorismos:");
	scanf("%d", &numero);
	
	a = numero / 10000;
	bb = numero / 1000;
	b = bb % 10;
	cc = numero / 100;
	c = cc % 10;
	dd = numero / 10;
	d = dd % 10;
	ee = numero / 1;
	e = ee % 10;
	
	printf(" os cinco numeros são: %d   %d   %d   %d   %d", a, b, c, d, e);
	
	
	return 0;
}