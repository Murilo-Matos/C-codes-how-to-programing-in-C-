#include<stdio.h> 

void function1(int a);
void function2(int b);
void function3(int c);

int main(void)
{
	void(*f[3])(int) = {function1, function2, function3};
	
	int choice;
	
	printf("Type it a number between 0 and 2, 3 for leave:");
	scanf("%d", &choice);
	
	while(choice >= 0 && choice < 3)
	{
		(*f[choice])(choice);
		
		printf("Type it a number between 0 and 2, 3 for finished: ");
		scanf("%d", &choice);
	}
	
	printf("Execution of program completed\n");
	return 0;
}

void function1(int a)
{
	printf("You type it %d, of mode that function1 was called\n\n", a);
}

void function2(int b)
{
	printf("You type it %d, of mode that function2 was called\n\n", b);
}

void function3(int c)
{
	printf("You type it %d, of mode that function3 was called\n\n", c);
}