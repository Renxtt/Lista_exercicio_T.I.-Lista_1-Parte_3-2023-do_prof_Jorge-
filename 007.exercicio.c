#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3, equilatero, isosceles, escaleno;
	
	isosceles=(n1==n2!=n3)||(n1==n3!=n2)||(n2==n3!=n1);
	equilatero=n1==n2==n3;
	escaleno=n1!=n2!=n3;
	
	printf("Digite três números dando espaços entre eles: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if(n1<n2&&n2<n3){
		printf("\n\n\nO seu Primeiro Número é: %d\nO seu segundo Número é: %d\nO seu terceiro número é: %d\nEle é um triangulo Isósceles", n1, n2, n3);
		
	}else if(n1==n2&&n2==n3){
		printf("\n\n\nO seu Primeiro Número é: %d\nO seu segundo Número é: %d\nO seu terceiro número é: %d\nEle é um triangulo Equilátero", n1, n2, n3);
	}else if((n1==n2&&n2!=n3)||(n1==n3&&n3!=n2)||(n2==n3&&n3!=n1)){
		printf("\n\n\nO seu Primeiro Número é: %d\nO seu segundo Número é: %d\nO seu terceiro número é: %d\nEle é um triangulo escaleno", n1, n2, n3);
	}
	return 0;
}
