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
	printf("\n\nO número sorteado é:%.2f", nub);
	if(nub<0){
		printf("\n\nesse número é negativo e %.2f² é:", nub,(pow(nub,2)));
	}else{
		printf("\n\nEsse número é positivo e a raiz de %.2f é: %.2f",nub, (sqrt(nub)));
		
	}
	
	return 0;
}
