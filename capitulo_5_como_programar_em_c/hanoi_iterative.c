#include <stdio.h>
#include <math.h>


int hanoi(int index,int tower_1,int tower_2,int reverse);

int even(int tower);

int main(void){
	
	int m = 0;
	int n = 0;
	int c = 0;
	int t = 0;
	int e = 2;
	int d = 2;
	int u = 0;
	int i = 1;
	int t_1 = 0, t_2 = 0 ;
	
	printf("type it the number of disk that you want(only from 1 to 4): ");
	scanf("%d",&n);	
	
	
	m = pow(2,n) - 1;
	
	
	while(i <= m)
	{
		printf("\n%d\n",i);
		if(i % 2 != 0){
			if(n % 2 == 0){
				t_1 = even((i-1)%3);
				t_2 = even((i+1)%3);
				printf("%d --> %d", t_1, t_2);
			}
			else{
				printf("%d --> %d", (i-1)%3 + 1, (i+1)%3 + 1);
			}
		}
		else{
			if(d % 2 != 0){
				if(n % 2 == 0){
					t_1 = even((i+2)%3);
					t_2 = even((i+4)%3);
					printf("%d --> %d", t_1, t_2);
				}
				else{
					printf("%d --> %d", (i+2)%3 + 1, (i+4)%3 + 1);	
				}
			}
			else{
				if(n % 2 == 0){
					t_1 = even((i+4)%3);
					t_2 = even((i+2)%3);
					printf("%d --> %d", t_1, t_2);
				}
				else{
					printf("%d --> %d", (i+4)%3 + 1, (i+2)%3 + 1);	
				}
			}
			if(u == 2){
				if(t == 2){
					u = 0;
				}
				if(c % 2 == 0){
					d = d + e;
				}
				else
				{
					d = d - e;
					e += 1;
				}
				t++;
				c++;
			}
			else{
				if(u == 1){
					d = d - 1;
				}
				else{
					d = d + 1;	
				}
				u++;
			}
		}
		printf("\n---------------------------------\n");
		i++;	
	}
	
	return 0;
}


int even(tower){
	if(tower == 1){
		tower = 3;
	}
	else if(tower == 0){
		tower = 1;
	}
	return tower;
}



