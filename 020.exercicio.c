#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int num_de_1_a_5, i;

	for(i=0;i<=100000;i++){
	
		printf("Digite um N�mero de 1 a 5: ");
		scanf("%d", &num_de_1_a_5);
	
		if(num_de_1_a_5>=1&&num_de_1_a_5<=5){
			printf("Esse n�mero � entre 1 e 5 ele �: %d", num_de_1_a_5);
			break;
		}else if((num_de_1_a_5<1)){
			printf("Esse n�mero � abaixo de 1 ent�o ele � um n�mero n�o permitido\nREFA�A\n\n");
		}else if(num_de_1_a_5>5){
			printf("Esse n�mero � acima de 5 ent�o ele � um n�mero n�o permitido\nREFA�A\n\n");
		}	
	}
	return 0;
}
