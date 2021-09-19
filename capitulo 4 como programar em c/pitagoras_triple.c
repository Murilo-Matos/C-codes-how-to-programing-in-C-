#include <stdio.h>

int main(void){
	int contador_triplas = 0;
	int c_adjacent;
	int c_oposto;
	int hipotenusa;
	
	for(c_adjacent = 1; c_adjacent <= 500; c_adjacent++){
		for(c_oposto = 1; c_oposto <= 500; c_oposto++){
			for(hipotenusa = 1; hipotenusa <= 500; hipotenusa++){
				if(hipotenusa * hipotenusa == c_adjacent * c_adjacent + c_oposto * c_oposto){
					contador_triplas++;
				}
			}
		}
	} 
	printf("%d", contador_triplas);
	return 0;
}