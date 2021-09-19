#include <stdio.h>

int main (void)

{
	int counter = 1;
	int number, bigger;
	int a,b,c,d,e,f,g,h,i,j;
	int bigger1, bigger2, bigger3, bigger4, bigger5;
	int major, major1, major3;

	
	while ( counter <= 10)
	{
		
		printf("type it a number:");
		scanf("%d", &number);
	
		if(counter == 1)
			a = number;
		if(counter == 2)
			b = number;
		if(counter == 3)
			c = number;
		if(counter == 4)
			d = number;
		if(counter == 5)
			e = number;
		if(counter == 6)
			f = number;
		if(counter == 7)
			g = number;
		if(counter == 8)
			h = number;
		if(counter == 9)
			i = number;
		if(counter == 10)
			j = number;
	
		++counter;

	}
	
	if(a > b)
	{
		bigger1 = a;	
	}
	else
	{
		bigger1 = b;
	}
	if(c > d)
	{
		bigger2 = c;
	}
	else
	{
		bigger2 = d;
	}
	if(e > f)
	{
		bigger3 = e;
	}
	else
	{
		bigger3 = f;
	}
	if(g > h)
	{
		bigger4 = g;
	}
	else
	{
		bigger4 = h;
	}
	if(i > j)
	{
		bigger5 = i;
	}
	else
	{
		bigger5 = j;
	}
	
	if(bigger1 > bigger2)
	{
		major = bigger1;
	}
	else
	{
		major = bigger2;
	}
	if(bigger3 > bigger4)
	{
		major1 = bigger3;	
	}
	else
	{
		major1 = bigger4;
	}
	if(major > major1)
		major3 = major;
	else
	{
		major3 = major1;
	}
	if(major3 > bigger5)
	{
		bigger = major3;
	}
	else 
	{
		bigger = bigger5;
	}
	
	printf("bigger: %d", bigger);
	
	return 0;

}