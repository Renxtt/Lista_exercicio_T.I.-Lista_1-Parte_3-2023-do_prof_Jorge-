#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>



main(void){
	
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));	
	int nub, rall;
	
	rall = rand() % 41+1;
	
	if(rall>20){
		nub = rall/2;
		printf(" %d � maior que 20 e sua metade � %d", rall, nub);
	}else{
		printf("%d n�o � um n�mero maior que 20", rall);
	}
	return 0;
}
