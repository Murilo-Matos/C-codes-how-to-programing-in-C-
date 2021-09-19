#include <stdio.h>

int main(void){
	int count;
	int ok = 1;
	int year = 2021;
	double population   = 7800000000;
	double increase = 0;
	double population_2 = 0;
		printf("Year\tPopulation in the year's end\tPopulation increase number\n\n");
	
	for(count = 1; count <= 75; count++){
		population_2 = population + population * 1.2/100;
		if(population_2 > 2*7800000000 && ok ==1){
			printf("\nIn 2079 we have almost the double of 2021's population\n\n");
			ok++;
		}
		increase = population_2 - population;
		printf("%d\t",year);
		printf("%.0lf\t\t\t",population_2);
		printf("%.0lf\t\n",increase);
		year=2021+count;
		population = population_2;		
	}
	return 0;
}