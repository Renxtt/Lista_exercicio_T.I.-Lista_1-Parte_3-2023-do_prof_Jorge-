#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float preco, preco2;
	char tip;

	printf("Isira o seu valor total de vendas do produto: ");
	scanf("%f", &preco);
	
	printf("\n\n\n\t\t\t\tEscolha entre as siguintes opções:\n\n\t\t\t\t\t   digite para:\n\t\t\t\t\t     1-Vista\n\t\t\t\t\t     2-Débito\n\t\t\t\t\t     3-Cheque\n");
	printf("Digite sua Escolha: ");
	scanf("%s", &tip);
	
	switch (tip) {
		case '1':
			printf("\n\nVocê escolheu o Pagamento a Vista");
			printf("\n sendo assim você ganhou um desconto de 5%c do preço total", 37);
			preco2 = preco-(preco*0.05);
			printf("\n\nPortanto o preço inicial é: %.2f\nO preço Final é: %.2f\n", preco, preco2);
//			sleep(1500);

			
			printf("\nObrigado por comprar conosco");
			break;
		case '2':
			printf("\n\nVocê escolheu o Pagamento a Débito");
			printf("\n sendo assim você ganhou um desconto de 0%c do preço total, ou seja sem nenhum desconto", 37);
			preco2 = preco;
			printf("\n\nPortanto o preço inicial é: %.2f\nO preço Final é: %.2f\n", preco, preco2);
//			sleep(1500);
			
			printf("\nObrigado por comprar conosco");
			break;
		case '3':
			printf("\n\nVocê escolheu o Pagamento a Cheque");
			printf("\nsendo assim você ganhou um acrécimo de 10%c do preço total", 37);
			preco2 = preco+(preco*0.1);
			printf("\n\nPortanto o preço inicial é: %.2f\nO preço Final é: %.2f\n", preco, preco2);
//			sleep(500);
			
			printf("\nObrigado por comprar conosco");
			break;
		default:
			printf("Sinto muito mas com a sua resposta nenhum dado foi encontrado, refaça\n\n\n\n\n");
			printf("Isira o seu valor total de vendas do produto: ");
			scanf("%f", &preco);
				
			printf("\n\n\n\t\t\t\tEscolha entre as siguintes opções:\n\n\t\t\t\t\t   digite para:\n\t\t\t\t\t     1-Vista\n\t\t\t\t\t     2-Débito\n\t\t\t\t\t     3-Cheque\n");
			printf("Digite sua Escolha: ");
			scanf("%s", &tip);
				
			switch (tip) {
				case '1':
					printf("\n\nVocê escolheu o Pagamento a Vista");
					printf("\n sendo assim você ganhou um desconto de 5%c do preço total", 37);
					preco2 = preco-(preco*0.05);
					printf("\n\nPortanto o preço inicial é: %.2f\nO preço Final é: %.2f\n", preco, preco2);
//					sleep(1500);
					
					printf("\nObrigado por comprar conosco");
					break;
				case '2':
					printf("\n\nVocê escolheu o Pagamento a Débito");
					printf("\n sendo assim você ganhou um desconto de 0%c do preço total, ou seja sem nenhum desconto", 37);
					preco2 = preco;
					printf("\n\nPortanto o preço inicial é: %.2f\nO preço Final é: %.2f\n", preco, preco2);
//					sleep(1500);
					
					printf("\nObrigado por comprar conosco");
					break;
				case '3':
					printf("\n\nVocê escolheu o Pagamento a Cheque");
					printf("\n sendo assim você ganhou um acrécimo de 10%c do preço total", 37);
					preco2 = preco+(preco*0.1);
					printf("\n\nPortanto o preço inicial é: %.2f\nO preço Final é: %.2f\n", preco, preco2);
//					sleep(1500);
					
					printf("\nObrigado por comprar conosco");
					break;
		
			break;
	}
	
}
}
