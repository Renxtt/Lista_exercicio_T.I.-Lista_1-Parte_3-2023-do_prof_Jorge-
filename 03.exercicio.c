#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	
	printf("insir� um n�mero: ");
	scanf("%d", &n1);
	
	printf("insir� um segundo n�mero: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		printf("%d � maior que %d", n1, n2);
	}else{
		printf("%d � maior que %d", n2, n1);
	}
	return 0;
}
