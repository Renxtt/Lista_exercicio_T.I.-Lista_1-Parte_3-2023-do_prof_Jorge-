#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "porttuguese");
	
	int n1;
	
	printf("digite um n�mero: ");
	scanf("%d", &n1);
	
	if(n1>=100&&n1<=200){
		printf("%d � um n�mero entre 100 e 200", n1);
		
	}else{
		printf("%d n�o � esta entre  100 e 200", n1);
	}
	return 0;
}
