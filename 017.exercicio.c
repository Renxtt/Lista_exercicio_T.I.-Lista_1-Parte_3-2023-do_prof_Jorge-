#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float nub;
	
	srand(time(NULL));
	
	nub = rand() % 100-50;
	printf("\n\nO n�mero sorteado �:%.2f", nub);
	if(nub<0){
		printf("\n\nesse n�mero � negativo e %.2f� �:", nub,(pow(nub,2)));
	}else{
		printf("\n\nEsse n�mero � positivo e a raiz de %.2f �: %.2f",nub, (sqrt(nub)));
		
	}
	
	return 0;
}
