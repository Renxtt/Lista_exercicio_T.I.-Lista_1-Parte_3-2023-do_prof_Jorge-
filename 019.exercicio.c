#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int num_de_1_a_5, i;

	for(i=0;i<=100000;i++){
	
		printf("Digite um Número de 1 a 5: ");
		scanf("%d", &num_de_1_a_5);
	
		if(num_de_1_a_5>=1&&num_de_1_a_5<=5){
			printf("Esse número é entre 1 e 5 ele é: %d", num_de_1_a_5);
			break;
		}else if((num_de_1_a_5<1)){
			printf("Esse número é abaixo de 1 então ele é um número não permitido\nREFAÇA\n\n");
		}else if(num_de_1_a_5>5){
			printf("Esse número é acima de 5 então ele é um número não permitido\nREFAÇA\n\n");
		}	
	}
	return 0;
}
