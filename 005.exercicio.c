#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	float qtd_mac_tot, qtd_mac_def, qtd_mac_pro;
	
	printf("n�mero de pe�as produzidas pela maquina: ");
	scanf("%f", &qtd_mac_tot);
	
	printf("n�mero de pe�as defeituasas produzidas pela maquina: ");
	scanf("%f", &qtd_mac_def);
	

	qtd_mac_pro=(qtd_mac_tot*0.1);
	
	if(qtd_mac_def>=(qtd_mac_tot*0.1)){
		printf("\n\n\nprecisa de manuten��o!!");
		printf("\nA quantia de pe�as defeituosas �: %.0f\nA quantia de Pe�as produzidas �: %.0f\nA quantia de pe�as defeituosas para precisar de manuten��o �: %.0f", qtd_mac_def, qtd_mac_tot, qtd_mac_pro);
	}else{
		printf("\n\n\nN�o precisa de manuten��o!!");
		printf("\nA quantia de pe�as defeituosas �: %.0f\nA quantia de Pe�as produzidas �: %.0f\nA quantia de pe�as defeituosas para precisar de manuten��o �: %.0f", qtd_mac_def, qtd_mac_tot, qtd_mac_pro);
		
	}
	return 0;
}
