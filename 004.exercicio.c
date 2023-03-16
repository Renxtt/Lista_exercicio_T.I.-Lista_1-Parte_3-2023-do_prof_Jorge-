#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "porttuguese");
	
	int n1;
	
	printf("digite um número: ");
	scanf("%d", &n1);
	
	if(n1>=100&&n1<=200){
		printf("%d é um número entre 100 e 200", n1);
		
	}else{
		printf("%d não é esta entre  100 e 200", n1);
	}
	return 0;
}
