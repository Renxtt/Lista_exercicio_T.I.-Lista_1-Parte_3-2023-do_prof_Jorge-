#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	char nm1[50], nm2[50];
	int id1, id2;
	
	printf("\nQual é o nome da primeira pessoa: ");
	scanf("%s", &nm1);
	printf("\nQual é a idade dela(e): ");
	scanf("%d", &id1);
	printf("\nQual é o nome da segunda pessoa: ");
	scanf("%s", &nm2);
	printf("\nQual é a idade dela(e): ");
	scanf("%d", &id2);
	
	if(id1>id2){
		printf("%s é a pessoa mais velha citada, com %d anos", nm1, id1);
	}else if(id2>id1){
		printf("%s é a pessoa mais velha citada, com %d anos", nm2, id2);
	}else{
		id1=id2;
		printf("Ambas as pessoas, %s e %s possuem a mesma idade, %d anos", nm1, nm2, id2);
	}

	return 0;
}
