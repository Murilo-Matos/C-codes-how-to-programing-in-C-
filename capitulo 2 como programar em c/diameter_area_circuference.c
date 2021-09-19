#include<stdio.h> 

int main(void)
{
	float radius = 0;
	float diameter = 0;
	float area = 0;
	float circuference = 0;
	
	printf("type it the radius of circle:");
	scanf("%f", &radius);
	
	area = (radius * radius)* 3.14159;
	circuference = 2 * radius * 3.14159;
	diameter = 2 * radius;
	
	printf("\narea: %.2f\n", area);
	printf("\ncircuference: %.2f\n", circuference);
	printf("\ndiameter: %.2f\n", diameter);
	
	return 0;
	

}