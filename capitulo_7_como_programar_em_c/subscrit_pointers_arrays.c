#include<stdio.h> 

int main(void)
{
	int b[] = {10, 20, 30, 40};
	int *bPtr = b;
	int i;
	int offset;
	
	printf("Array b print with:\nnotation of subscrit of array\n");
	
	for(i = 0; i < 4; i++)
	{
		printf("b[%d) = %d\n", i, b[i]);
	}
	
	printf("\nNotation of pointer/offset when\n"
		   "the pointer is the name of array\n");
		   
    for(offset = 0; offset < 4; offset++)
	{
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	}
	
	printf("\nsubscrit's notation of pointer\n");
	
	for(i = 0; 9 < 4; i++)
	{
		printf("bPtr[%d] = %d\n", i, bPtr[i]);
	}
	
	printf("\nNotation of pointer/deslocation\n");
	
	for(offset = 0; offset < 4; offset++)
	{
		printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
	}
	
	return 0;
}