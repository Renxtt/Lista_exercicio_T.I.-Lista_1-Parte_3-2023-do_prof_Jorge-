#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float qtd_mac_tot, qtd_mac_def, qtd_mac_pro;
	
	printf("número de peças produzidas pela maquina: ");
	scanf("%f", &qtd_mac_tot);
	
	printf("número de peças defeituasas produzidas pela maquina: ");
	scanf("%f", &qtd_mac_def);
	

	qtd_mac_pro=(qtd_mac_tot*0.1);
	
	if(qtd_mac_def>=(qtd_mac_tot*0.1)){
		printf("\n\n\nprecisa de manutenção!!");
		printf("\nA quantia de peças defeituosas é: %.0f\nA quantia de Peças produzidas é: %.0f\nA quantia de peças defeituosas para precisar de manutenção é: %.0f", qtd_mac_def, qtd_mac_tot, qtd_mac_pro);
	}else{
		printf("\n\n\nNão precisa de manutenção!!");
		printf("\nA quantia de peças defeituosas é: %.0f\nA quantia de Peças produzidas é: %.0f\nA quantia de peças defeituosas para precisar de manutenção é: %.0f", qtd_mac_def, qtd_mac_tot, qtd_mac_pro);
		
	}
	return 0;
}
