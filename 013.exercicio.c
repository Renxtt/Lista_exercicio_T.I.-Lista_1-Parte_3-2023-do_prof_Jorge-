#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	char producto;
	float preco, prest;
	printf("Olá nos somos a Loja Mamão com Açúcar\n");
	printf("Digite o nome do produto:");
	scanf("%s", &producto);
	
	printf("digite o preço do produto:");
	scanf("%f", &preco);
	
	if(preco>=250){
		prest = preco/5;
		printf("\n\n\n\n%.2f é maior que o minimo permitido para receber a prestação então Voçê está apto a receber a prestção",preco, preco);
		printf("\n\no número de prestações que se pode usar é 5 então:");
		printf("\n\nO valor normal seria %.2f\nO valor de cada prestação é %.2f\n",preco, prest);
		printf("\n\nobrigado por participar!!");
	}else{
		
		printf("\n\n\n\nInfelismente o valor %.2f esta abaixo do valor que possibilita a pretação então o valor a se pagar será %.2f", preco, preco);
	}
	
	return 0;
}
