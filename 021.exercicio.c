#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int numero_cal, numero_a, numero_b, escolha, i;
	
	printf("Qual � o primeiro n�mero: ");
	scanf("%d", &numero_a);
	printf("Qual � o segundo n�mero: ");
	scanf("%d", &numero_b);
	
	printf("mostrando para o usu�ro um menu com as op��es, escolha um modulo e ser� primeiro numero ? segund n�mero:0");
	printf("\n1- Soma");
	printf("\n2- Subtra��o");
	printf("\n3- Divis�o");
	printf("\n4- Multiplica��o");

	printf("Escolha um dos n�meros assima: ");
	scanf("%d", &escolha);
	
	switch (escolha) {
		case 1:
			numero_cal = numero_a + numero_b;
			printf("O caso escolhido foi a Soma e a conta ficou como %d+%d=%d", numero_a, numero_b, numero_cal);			
			break;
		case 2:
			numero_cal = numero_a - numero_b;
			printf("O caso escolhido foi a Subtra��o e a conta ficou como %d-%d=%d", numero_a, numero_b, numero_cal);			
			break;
		case 3:
			numero_cal = numero_a/numero_b;
			printf("O caso escolhido foi a Divis�o e a conta ficou como %d/%d=%d", numero_a, numero_b, numero_cal);
			break;
		case 4:
			numero_cal = numero_a * numero_b;			
			printf("O caso escolhido foi a Multiplica��o e a conta ficou como %d*%d=%d", numero_a, numero_b, numero_cal);			
			break;
		default:
			for(int i=0;i<=10000;i++){
				printf("\nA op��o escolhida � inexistente por favor repita a a��o!!\n");
				printf("Qual � o primeiro n�mero: ");
					scanf("%d", &numero_a);
					printf("Qual � o segundo n�mero: ");
					scanf("%d", &numero_b);
					
					printf("mostrando para o usu�ro um menu com as op��es, escolha um modulo e ser� primeiro numero ? segund n�mero:0");
					printf("\n1- Soma");
					printf("\n2- Subtra��o");
					printf("\n3- Divis�o");
					printf("\n4- Multiplica��o");
				
					printf("Escolha um dos n�meros assima: ");
					scanf("%d", &escolha);
					
					switch (escolha) {
						case 1:
							numero_cal = numero_a + numero_b;
							printf("O caso escolhido foi a Soma e a conta ficou como %d+%d=%d", numero_a, numero_b, numero_cal);			
							break;
						case 2:
							numero_cal = numero_a - numero_b;
							printf("O caso escolhido foi a Subtra��o e a conta ficou como %d-%d=%d", numero_a, numero_b, numero_cal);			
							break;
						case 3:
							numero_cal = numero_a/numero_b;
							printf("O caso escolhido foi a Divis�o e a conta ficou como %d/%d=%d", numero_a, numero_b, numero_cal);
							break;
						case 4:
							numero_cal = numero_a * numero_b;			
							printf("O caso escolhido foi a Multiplica��o e a conta ficou como %d*%d=%d", numero_a, numero_b, numero_cal);			
							break;	
			}
			break;
	}
	return 0; 
}
}
