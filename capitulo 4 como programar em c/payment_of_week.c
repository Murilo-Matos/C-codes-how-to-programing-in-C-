#include <stdio.h>

int main (void){
	int pagamento;
	int hours_work;
	int P;
	int Q;
	int S_1 = 0;
	int S = 0;
	
	printf("type it your employee code: ");
	scanf("%d",&pagamento);
	
	switch(pagamento){
		case 1:
			printf("\nyour wage in this week is R$500 Mr.Manager!\n\n");
			break;
		case 2:
			printf("\ntype it your hours of work: ");
			scanf("%d",&hours_work);
			if(hours_work <= 40){
				S = hours_work*10;
				printf("\nyour wage is R$%d Mr.Hourly hour!\n\n", S);
				break;
			}
			else{
				S_1 = (hours_work - 40)*10;
				S = 1.5*S_1 + 40*10;
				printf("\nyour wage is R$%d Mr.Hourly hour!\n\n", S);
				break;
			}
         case 3:
         	printf("\nif you sell vases  => type it 1\n\n");
         	printf("if you sell tables => type it 2\n\n");
         	printf("if you sell towels => type it 3\n\n");
         	printf("go on:");
         	scanf("%d",&P);
    		printf("\n\ntype it the quantify of products that you sold:");
         	scanf("%d",&Q);

         	if(P == 1){
  	  	  	    S = 250 + (5.7*(Q*8));
  	  	  	    printf("\n\nyour wage is R$%d Mr.commissioned worker!\n",S);
			 }
            else if(P ==2){
				S = 250 + (5.7*(Q*18));
  	  	  	    printf("\n\nyour wage is R$%d Mr.commissioned worker!\n",S);
			}
			else if(P == 3){
				S = 250 + (5.7*(Q*13));
  	  	  	    printf("\n\nyour wage is R$%d Mr.commissioned worker!\n",S);
			}
			else{
				printf("\n\nThe product that you sell's not a valid input\n\n");
			}
         	break;
         	
         case 4:
         	printf("\nif you do vases  => type it 1\n\n");
         	printf("\nif you do tables => type it 2\n\n");
         	printf("\nif you do towels => type it 3\n\n");
         	printf("go on:");
         	scanf("%d",&P);
    		printf("\n\ntype it the quantify of products that you did:");
         	scanf("%d",&Q);
         	
         	if(P == 1){
  	  	  	    S = 5*Q;
  	  	  	    printf("\n\nyour wage is R$%d Mr.craftsman!\n",S);
			 }
            else if(P ==2){
				S = 15*Q;
  	  	  	    printf("\n\nyour wage is R$%d Mr.craftsman!\n",S);
			}
			else if(P == 3){
				S = 10*Q;
  	  	  	    printf("\n\nyour wage is R$%d Mr.craftsman!\n",S);
			}
			else{
				printf("\n\nThe product that you do's not a valid input\n\n");
			}
         	break;
		default:
			printf("\nerro\n");
			break;
	}
	
	return 0;
}