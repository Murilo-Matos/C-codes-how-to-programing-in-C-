#include <stdio.h>

int main(void){
	int count = 0;
	const char *romain[101] = {"nothing","I","II","III","IV","V", "VI", "VII", "VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX","XXI",
                  "XXII","XXIII","XXIV","XXV","XXVI","XXVII","XXVIII","XXIX","XXX","XXXI","XXXII","XXXIII","XXXIV","XXXV","XXXVI","XXXVII",
				  "XXXVIII","XXXIX","XL","XLI","XLII","XLIII","XLIV","XLV","XLVI","XLVII","XLVIII","XLIX","L","LI","LII","LIII","LIV","LV",
				  "LVI","LVII","LVIII","LIX","LX","LXI","LXII","LXIII","LXIV","LXV","LXVI","LXVII","LXVIII","LXIX","LXX","LXXI","LXXII","LXXIII",
				  "LXXIV","LXXV","LXXVI","LXXVII","LXXVIII","LXXIX","LXXX","LXXXI","LXXXII","LXXXIII","LXXXIV","LXXXV","LXXXVI","LXXXVII","LXXXVIII",
				  "LXXXIX","XC","XCI","XCII","XCIII","XCIV", "XCV","XCVI", "XCVII","XCVIII","XCIX","C"};
				  
				  
   while(count <= sizeof(romain)){
   	 
   	 printf("number:%d",count);
   	 printf("\tromain number:%s\n",romain[count]);
   	 
   	 if(count == 100){
			break;
		}
   	 
	 count++;   
   }
	return 0;
}