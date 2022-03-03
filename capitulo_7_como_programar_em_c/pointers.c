#include<stdio.h>

int main(void)
{
	int a;
	int *aPtr;
	
	a = 7;
	aPtr = &a;
	
	printf("The address of a is %p" 
	       "\nThe value of aPtr is %p", &a, aPtr);
	       
	printf("\n\nThe a's value is %d"
	       "\nThe value of *aPtr is %d", a, *aPtr);
		   
		   printf("\n\nshowing thar * and & are complements a"
                  "of the other\n&*aPtr = %p"
				  "\n*&aPtr = %p\n", &*aPtr, *&aPtr);
	
	return 0;       
}