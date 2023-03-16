#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	
	printf("insirá um número: ");
	scanf("%d", &n1);
	
	printf("insirá um segundo número: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		printf("%d é maior que %d", n1, n2);
	}else{
		printf("%d é maior que %d", n2, n1);
	}
	return 0;
}
