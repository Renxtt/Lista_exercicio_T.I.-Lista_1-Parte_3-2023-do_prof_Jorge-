#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int nub;
	
	printf("insira um número: ");
	scanf("%d", &nub);
	
	if(nub>10){
		printf("%d é maior que 10", nub);
	}else{
		printf("%d é menor que 10", nub);
	}
	return 0;
}	
