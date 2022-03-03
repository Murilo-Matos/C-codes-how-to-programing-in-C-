#include <stdio.h>

void hanoi(int n,int start,int end,int other);

int main(void){
	

	
	hanoi(5, 1, 3, 0);
	
	return 0;
}

void hanoi(int n,int start,int end,int other){
	
	if(n==1){
		printf("\n%d -> %d\n----------------------\n", start, end);		
	}
	else{
		other = 6 - (start + end);
		hanoi(n-1,start,other,other);
		printf("\n%d -> %d\n----------------------\n", start, end);	
		hanoi(n-1,other,end,other);
	}
}