#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int nub;
	
	printf("insira um n�mero: ");
	scanf("%d", &nub);
	
	if(nub>10){
		printf("%d � maior que 10", nub);
	}else{
		printf("%d � menor que 10", nub);
	}
	return 0;
}	
