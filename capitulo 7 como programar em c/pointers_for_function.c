#include<stdio.h> 
#define SIZE 10

void bubble(int work[], const int size, int(*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);


int main(void)
{
	int order;
	int count;
	
	int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	
	printf("Type it 1 for to rank in crescente order,\n"
	   	   "Type it 2 for to rank in descrescent order: ");
    scanf("%d", &order);
    
    printf("\nDice's itens in original order\n");
    
    for(count = 0; count < SIZE; count++)
	{
		printf("%5d", a[count]);
	}
	
	if(order == 1)
	{
		bubble(a, SIZE, ascending);
		printf("\nDice's itens in crescent order\n");
	}
	
	else
	{
		bubble(a, SIZE, descending);
		printf("\nDice's itens in decrescent order\n");
	}
	
	for(count = 0; count < SIZE; count++)
	{
		printf("%5d", a[count]);
	}
	
	printf("\n");
	return 0;
}


void bubble(int work[], const int size, int (*compare)(int a, int b))
{
	int pass;
	int count;
	
	void inverts(int *element1Ptr, int *element2ptr);
	
	for(pass = 1; pass < size; pass++)
	{
		for(count = 0; count < size -1; count++)
		{
			if((*compare)(work[count], work[count + 1]))
			{
				inverts(&work[count], &work[count +1]);
			}
		}
	}
}

void inverts(int *element1Ptr, int *element2Ptr)
{
	int maintenance;
	
	maintenance = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = maintenance;
}

int ascending(int a, int b)
{
	return b < a;
}

int descending(int a, int b)
{
	return b > a;
}