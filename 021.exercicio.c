#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int numero_cal, numero_a, numero_b, escolha, i;
	
	printf("Qual é o primeiro número: ");
	scanf("%d", &numero_a);
	printf("Qual é o segundo número: ");
	scanf("%d", &numero_b);
	
	printf("mostrando para o usuáro um menu com as opções, escolha um modulo e será primeiro numero ? segund número:0");
	printf("\n1- Soma");
	printf("\n2- Subtração");
	printf("\n3- Divisão");
	printf("\n4- Multiplicação");

	printf("Escolha um dos números assima: ");
	scanf("%d", &escolha);
	
	switch (escolha) {
		case 1:
			numero_cal = numero_a + numero_b;
			printf("O caso escolhido foi a Soma e a conta ficou como %d+%d=%d", numero_a, numero_b, numero_cal);			
			break;
		case 2:
			numero_cal = numero_a - numero_b;
			printf("O caso escolhido foi a Subtração e a conta ficou como %d-%d=%d", numero_a, numero_b, numero_cal);			
			break;
		case 3:
			numero_cal = numero_a/numero_b;
			printf("O caso escolhido foi a Divisão e a conta ficou como %d/%d=%d", numero_a, numero_b, numero_cal);
			break;
		case 4:
			numero_cal = numero_a * numero_b;			
			printf("O caso escolhido foi a Multiplicação e a conta ficou como %d*%d=%d", numero_a, numero_b, numero_cal);			
			break;
		default:
			for(int i=0;i<=10000;i++){
				printf("\nA opção escolhida é inexistente por favor repita a ação!!\n");
				printf("Qual é o primeiro número: ");
					scanf("%d", &numero_a);
					printf("Qual é o segundo número: ");
					scanf("%d", &numero_b);
					
					printf("mostrando para o usuáro um menu com as opções, escolha um modulo e será primeiro numero ? segund número:0");
					printf("\n1- Soma");
					printf("\n2- Subtração");
					printf("\n3- Divisão");
					printf("\n4- Multiplicação");
				
					printf("Escolha um dos números assima: ");
					scanf("%d", &escolha);
					
					switch (escolha) {
						case 1:
							numero_cal = numero_a + numero_b;
							printf("O caso escolhido foi a Soma e a conta ficou como %d+%d=%d", numero_a, numero_b, numero_cal);			
							break;
						case 2:
							numero_cal = numero_a - numero_b;
							printf("O caso escolhido foi a Subtração e a conta ficou como %d-%d=%d", numero_a, numero_b, numero_cal);			
							break;
						case 3:
							numero_cal = numero_a/numero_b;
							printf("O caso escolhido foi a Divisão e a conta ficou como %d/%d=%d", numero_a, numero_b, numero_cal);
							break;
						case 4:
							numero_cal = numero_a * numero_b;			
							printf("O caso escolhido foi a Multiplicação e a conta ficou como %d*%d=%d", numero_a, numero_b, numero_cal);			
							break;	
			}
			break;
	}
	return 0; 
}
}
