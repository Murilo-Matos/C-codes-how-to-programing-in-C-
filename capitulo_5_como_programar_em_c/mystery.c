#include <stdio.h>

int mystery(int a, int b);

int main(void){
	
	int x;
	int y;
	
	printf("Digite dois inteiros: ");
	scanf("%d%d",&x,&y);
	
	if(x < 0){
		x = x*(-1);
		printf("O resultado é %d\n", -(mystery(x,y)));
	}
	else if(y < 0){
		y = y*(-1);
		printf("O resultado é %d\n", -(mystery(x,y)));	
	}
	else{
		printf("O resultado é %d\n",   mystery(x,y));
	}
	
	return 0;
}


int mystery(int a, int b){
	if(b == 1){
		return a;
	}
	else{
		return a + mystery(a,b-1);
	}
}

