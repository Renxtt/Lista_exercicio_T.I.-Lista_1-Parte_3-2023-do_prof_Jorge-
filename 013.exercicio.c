#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	char producto;
	float preco, prest;
	printf("Ol� nos somos a Loja Mam�o com A��car\n");
	printf("Digite o nome do produto:");
	scanf("%s", &producto);
	
	printf("digite o pre�o do produto:");
	scanf("%f", &preco);
	
	if(preco>=250){
		prest = preco/5;
		printf("\n\n\n\n%.2f � maior que o minimo permitido para receber a presta��o ent�o Vo�� est� apto a receber a prest��o",preco, preco);
		printf("\n\no n�mero de presta��es que se pode usar � 5 ent�o:");
		printf("\n\nO valor normal seria %.2f\nO valor de cada presta��o � %.2f\n",preco, prest);
		printf("\n\nobrigado por participar!!");
	}else{
		
		printf("\n\n\n\nInfelismente o valor %.2f esta abaixo do valor que possibilita a preta��o ent�o o valor a se pagar ser� %.2f", preco, preco);
	}
	
	return 0;
}
