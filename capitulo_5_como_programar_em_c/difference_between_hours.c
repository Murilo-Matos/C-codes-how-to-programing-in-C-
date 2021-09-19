#include<stdio.h>

int difference(int x, int y, int z,int x_2, int y_2, int z_2);

int main(void){
	int hour = 0;
	int minute = 0;
	int second = 0;
	int hour_2 = 0;
	int minute_2 = 0;
	int second_2 = 0;
	int result = 0;
	
	printf("\nIT'S NEED BE LESS THAN 12 O'CLOCK!\n\n");
	printf("\ntype it the hour: ");
	scanf("%d",&hour);
	printf("\ntype it the minutes: ");
	scanf("%d",&minute);
	printf("\ntype it the seconds: ");
	scanf("%d",&second);
	printf("\n\ntype it other hour: ");
	scanf("%d",&hour_2);
	printf("\ntype it othe minutes: ");
	scanf("%d",&minute_2);
	printf("\ntype it othe seconds: ");
	scanf("%d",&second_2);
	
	result = difference(hour,minute,second,hour_2,minute_2,second_2);
	
	printf("\nthe difference between the hours: %d\n", result);
	
	
	return 0;
}


int difference(int x, int y, int z,int x_2, int y_2, int z_2){
	int result = (x * 3600) + (y * 60) + z - (x_2 *3600) + (y_2 * 60) + z_2; 
	
	if (result < 0){
		return result * (-1);
	}
	else{
	return result;
	}
}

