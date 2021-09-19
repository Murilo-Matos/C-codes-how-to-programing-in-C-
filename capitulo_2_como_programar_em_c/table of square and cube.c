#include <stdio.h>

int main (void)

{
	//declaration of variables
	int q0, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;
	int c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	
	//dice's input of square numbers
	q0 = 0 * 0;
	q1 = 1 * 1;
	q2 = 2 * 2;
	q4 = 4 * 4;
	q3 = 4 * 4;
	q5 = 5 * 5;
	q6 = 6 * 6;
	q7 = 7 * 7;
	q8 = 8 * 8;
	q9 = 9 * 9;
	q10 = 10 * 10;
	
	//dice's input of cube number
	c0 = 0 * 0 * 0;
	c1 = 1 * 1 * 1;
	c2 = 2 * 2 * 2;
	c3 = 3 * 3 * 3;
	c4 = 4 * 4 * 4;
	c5 = 5 * 5 * 5;
	c6 = 6 * 6 * 6;
	c7 = 7 * 7 * 7;
	c8 = 8 * 8 * 8;
	c9 = 9 * 9 * 9;
	c10 = 10 * 10 * 10;
	
	//exit of dices
	printf("this is square and cube of numbers between one and ten:\n");
	printf("number    square    cube\n");
	printf("0          %d        %d\n", q0, c0);
	printf("1          %d        %d\n", q1, c1);
	printf("2          %d        %d\n", q2, c2);
	printf("3          %d       %d\n", q3, c3);
	printf("4          %d       %d\n", q4, c4);
	printf("5          %d       %d\n", q5, c5);
	printf("6          %d       %d\n", q6, c6);
	printf("7          %d       %d\n", q7, c7);
	printf("8          %d       %d\n", q8, c8);
	printf("9          %d       %d\n", q9, c9);
	printf("10         %d      %d\n", q10, c10);
	
	return 0;
	
}