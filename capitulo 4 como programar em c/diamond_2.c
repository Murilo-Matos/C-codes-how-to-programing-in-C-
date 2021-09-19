#include <stdio.h>

int main(void){
	
	int input;
	int count = 0;
		
	printf("type it a odd number of 1 to 19: ");
	scanf("%d",&input);
	printf("\n");
	
	switch(input){
		case 1:
			printf("     *\n\n");
			break;
		case 3:
			while(count <= input){
				if(count == 1 || count == 3){printf("     *\n\n");}
				else if(count == 2){printf("    ***\n\n");}
				count++;
			}
			break;
		case 5:
			while(count <= input){
				if(count == 1 || count == 5){printf("     *\n\n");}
				else if(count == 2 || count == 4){printf("    ***\n\n");}
				else if(count == 3){printf("   *****\n\n");}
				count++;
			}
			break;
		case 7:
			while(count <= input){
				if(count == 1 || count == 7){printf("     *\n\n");}
				else if(count == 2 || count == 6){printf("    ***\n\n");}
				else if(count == 3 || count == 5){printf("   *****\n\n");}
				else if(count == 4){printf("  *******\n\n");}
				count++;
			}
			break;
		case 9:
			while(count <= input){
				if(count == 1 || count == 9){printf("     *\n\n");}
				else if(count == 2 || count == 8){printf("    ***\n\n");}
				else if(count == 3 || count == 7){printf("   *****\n\n");}
				else if(count == 4 || count == 6){printf("  *******\n\n");}
				else if(count == 5){printf(" *********\n\n");}
				count++;
			}
			break;
		case 11:
			while(count <= input){
				if(count == 1 || count == 11){printf("      *\n\n");}
				else if(count == 2 || count == 10){printf("     ***\n\n");}
				else if(count == 3 || count == 9){printf("    *****\n\n");}
				else if(count == 4 || count == 8){printf("   *******\n\n");}
				else if(count == 5 || count == 7){printf("  *********\n\n");}
				else if(count == 6){printf(" ***********\n\n");}
				count++;
			}
			break;
		case 13:
			while(count <= input){
				if(count == 1 || count == 13){printf("       *\n\n");}
				else if(count == 2 || count == 12){printf("      ***\n\n");}
				else if(count == 3 || count == 11){printf("     *****\n\n");}
				else if(count == 4 || count == 10){printf("    *******\n\n");}
				else if(count == 5 || count == 9){printf("   *********\n\n");}
				else if(count == 6 || count == 8){printf("  ***********\n\n");}
				else if(count == 7){printf(" *************\n\n");}
				count++;
			}
			break;
		case 15:
			while(count <= input){
				if(count == 1 || count == 15){printf("        *\n\n");}
				else if(count == 2 || count == 14){printf("       ***\n\n");}
				else if(count == 3 || count == 13){printf("      *****\n\n");}
				else if(count == 4 || count == 12){printf("     *******\n\n");}
				else if(count == 5 || count == 11){printf("    *********\n\n");}
				else if(count == 6 || count == 10){printf("   ***********\n\n");}
				else if(count == 7 || count == 9){printf("  *************\n\n");}
				else if(count == 8){printf(" ***************\n\n");}
				count++;
			}
			break;
		case 17:
			while(count <= input){
				if(count == 1 || count == 17){printf("         *\n\n");}
				else if(count == 2 || count == 16){printf("        ***\n\n");}
				else if(count == 3 || count == 15){printf("       *****\n\n");}
				else if(count == 4 || count == 14){printf("      *******\n\n");}
				else if(count == 5 || count == 13){printf("     *********\n\n");}
				else if(count == 6 || count == 12){printf("    ***********\n\n");}
				else if(count == 7 || count == 11){printf("   *************\n\n");}
				else if(count == 8 || count == 10){printf("  ***************\n\n");}
				else if(count == 9){printf(" *****************\n\n");}
				count++;
			}
			break;
		case 19:
			while(count <= input){
				if(count == 1 || count == 19){printf("          *\n\n");}
				else if(count == 2 || count == 18){printf("         ***\n\n");}
				else if(count == 3 || count == 17){printf("        *****\n\n");}
				else if(count == 4 || count == 16){printf("       *******\n\n");}
				else if(count == 5 || count == 15){printf("      *********\n\n");}
				else if(count == 6 || count == 14){printf("     ***********\n\n");}
				else if(count == 7 || count == 13){printf("    *************\n\n");}
				else if(count == 8 || count == 12){printf("   ***************\n\n");}
				else if(count == 9 || count == 11){printf("  *****************\n\n");}
				else if(count == 10){printf(" *******************\n\n");}
				count++;
			}
			break;
		default:
			printf("\n\ninvalid answer\n\n");
	}
	return 0;
}