#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	
	float custo, custo2, foia;
	
	printf("Qual � a quantia de Folhas compradas: ");
	scanf("%f", &foia);
	
	if(foia<=100){
		custo=0.25;
		custo2=foia*custo;
		printf("\n\n\nVoc� comprou %.0f de folhas sulfites\n\nO Custo de cada Folha � 0,25 R%c\n\nO Custo total ao comprar %.0f de folhas � de %.2f R$", foia, 36, foia, custo2);
	}else if(foia>100){
		custo=0.20;
		custo2=foia*custo;
		printf("\n\n\nVoc� comprou %.0f de folhas sulfites\n\nO Custo de cada Folha � 0,20 R%c\n\nO Custo total ao comprar %.0f de folhas � de %.2f R$", foia, 36, foia, custo2);
	}
	return 0;
}
