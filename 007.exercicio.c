#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3, equilatero, isosceles, escaleno;
	
	isosceles=(n1==n2!=n3)||(n1==n3!=n2)||(n2==n3!=n1);
	equilatero=n1==n2==n3;
	escaleno=n1!=n2!=n3;
	
	printf("Digite tr�s n�meros dando espa�os entre eles: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if(n1<n2&&n2<n3){
		printf("\n\n\nO seu Primeiro N�mero �: %d\nO seu segundo N�mero �: %d\nO seu terceiro n�mero �: %d\nEle � um triangulo Is�sceles", n1, n2, n3);
		
	}else if(n1==n2&&n2==n3){
		printf("\n\n\nO seu Primeiro N�mero �: %d\nO seu segundo N�mero �: %d\nO seu terceiro n�mero �: %d\nEle � um triangulo Equil�tero", n1, n2, n3);
	}else if((n1==n2&&n2!=n3)||(n1==n3&&n3!=n2)||(n2==n3&&n3!=n1)){
		printf("\n\n\nO seu Primeiro N�mero �: %d\nO seu segundo N�mero �: %d\nO seu terceiro n�mero �: %d\nEle � um triangulo escaleno", n1, n2, n3);
	}
	return 0;
}
