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
	
	printf("\n\n\n\t\t\t\tEscolha entre as siguintes op��es:\n\n\t\t\t\t\t   digite para:\n\t\t\t\t\t     1-Vista\n\t\t\t\t\t     2-D�bito\n\t\t\t\t\t     3-Cheque\n");
	printf("Digite sua Escolha: ");
	scanf("%s", &tip);
	
	switch (tip) {
		case '1':
			printf("\n\nVoc� escolheu o Pagamento a Vista");
			printf("\n sendo assim voc� ganhou um desconto de 5%c do pre�o total", 37);
			preco2 = preco-(preco*0.05);
			printf("\n\nPortanto o pre�o inicial �: %.2f\nO pre�o Final �: %.2f\n", preco, preco2);
//			sleep(1500);

			
			printf("\nObrigado por comprar conosco");
			break;
		case '2':
			printf("\n\nVoc� escolheu o Pagamento a D�bito");
			printf("\n sendo assim voc� ganhou um desconto de 0%c do pre�o total, ou seja sem nenhum desconto", 37);
			preco2 = preco;
			printf("\n\nPortanto o pre�o inicial �: %.2f\nO pre�o Final �: %.2f\n", preco, preco2);
//			sleep(1500);
			
			printf("\nObrigado por comprar conosco");
			break;
		case '3':
			printf("\n\nVoc� escolheu o Pagamento a Cheque");
			printf("\nsendo assim voc� ganhou um acr�cimo de 10%c do pre�o total", 37);
			preco2 = preco+(preco*0.1);
			printf("\n\nPortanto o pre�o inicial �: %.2f\nO pre�o Final �: %.2f\n", preco, preco2);
//			sleep(500);
			
			printf("\nObrigado por comprar conosco");
			break;
		default:
			printf("Sinto muito mas com a sua resposta nenhum dado foi encontrado, refa�a\n\n\n\n\n");
			printf("Isira o seu valor total de vendas do produto: ");
			scanf("%f", &preco);
				
			printf("\n\n\n\t\t\t\tEscolha entre as siguintes op��es:\n\n\t\t\t\t\t   digite para:\n\t\t\t\t\t     1-Vista\n\t\t\t\t\t     2-D�bito\n\t\t\t\t\t     3-Cheque\n");
			printf("Digite sua Escolha: ");
			scanf("%s", &tip);
				
			switch (tip) {
				case '1':
					printf("\n\nVoc� escolheu o Pagamento a Vista");
					printf("\n sendo assim voc� ganhou um desconto de 5%c do pre�o total", 37);
					preco2 = preco-(preco*0.05);
					printf("\n\nPortanto o pre�o inicial �: %.2f\nO pre�o Final �: %.2f\n", preco, preco2);
//					sleep(1500);
					
					printf("\nObrigado por comprar conosco");
					break;
				case '2':
					printf("\n\nVoc� escolheu o Pagamento a D�bito");
					printf("\n sendo assim voc� ganhou um desconto de 0%c do pre�o total, ou seja sem nenhum desconto", 37);
					preco2 = preco;
					printf("\n\nPortanto o pre�o inicial �: %.2f\nO pre�o Final �: %.2f\n", preco, preco2);
//					sleep(1500);
					
					printf("\nObrigado por comprar conosco");
					break;
				case '3':
					printf("\n\nVoc� escolheu o Pagamento a Cheque");
					printf("\n sendo assim voc� ganhou um acr�cimo de 10%c do pre�o total", 37);
					preco2 = preco+(preco*0.1);
					printf("\n\nPortanto o pre�o inicial �: %.2f\nO pre�o Final �: %.2f\n", preco, preco2);
//					sleep(1500);
					
					printf("\nObrigado por comprar conosco");
					break;
		
			break;
	}
	
}
}
