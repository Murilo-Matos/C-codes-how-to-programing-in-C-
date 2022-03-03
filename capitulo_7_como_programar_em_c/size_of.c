#include<stdio.h> 

size_t getSize(float *ptr);

int main(void)
{
	float array[20];
	printf("The number of bytes in array is %d"
   	   	   "\nThe number of bytes returned for getSize is %d\n",
	   	    sizeof(array), size_t getSize(array));
	   	    
    return 0;
}

size_t getSize(float *ptr)
{
	return sizeof(ptr);
}