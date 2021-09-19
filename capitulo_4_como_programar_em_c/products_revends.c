#include<stdio.h>

int main(void)
{
	int qt = 0, n_product = 0, days = 0;
	float v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;
	float q_diary1, q_diary2, q_diary3, q_diary4, q_diary5, total;


	for(days = 1; days <= 5; days++)
	{
		printf("type it a product's numbers:");
		scanf("%d", &n_product);
			
		while(n_product != -1)
		{
			printf("amount of product %d:", n_product);
			scanf("%d", &qt);
		
			switch(n_product)
			{
			case 1:
				v1 = 2.98 * qt;
				break;
			case 2:
				v2 = 4.50 * qt;
				break;
			case 3:
				v3 = 9.98 * qt;
				break;
			case 4:
				v4 = 4.49 * qt;
				break;
			case 5:
				v5 = 6.87 * qt;
				break;

			}
			
			printf("type it a product's numbers:");
			scanf("%d", &n_product);
		}

		if(days == 1)
		{
			q_diary1 = v1 + v2 + v3 + v4 + v5;
		}
		else if(days == 2)
		{
			q_diary2 = v1 + v2 + v3 + v4 + v5;
		}
		else if(days == 3)
		{
			q_diary3 = v1 + v2 + v3 + v4 + v5;
		}
		else if(days == 4)
		{
			q_diary4 = v1 + v2 + v3 + v4 + v5;
		}
		else if(days == 5)
		{
			q_diary5 = v1 + v2 + v3 + v4 + v5;
		}
	}

	total = q_diary1 + q_diary2 + q_diary3 + q_diary4 + q_diary5;
	printf("the sum of total's revends of all products is: %.2f", total);

	return 0;
}
