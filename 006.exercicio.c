#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	int id;
	
	
	
	printf("Qual � a sua Idade:");
	scanf("%d", &id);
	
	if(id<=10){
		printf("\n\n\nSua idade � %d\nVoc� esta na classe Infantil", id);
		
	}else if(id<=17&&id>10){
		printf("\n\n\nSua idade � %d\nVoc� esta na classe Juvenil", id);
	}else if(id>18){
		printf("\n\n\nSua idade � %d\nVoc� esta na classe Senior", id);
	}
	return 0;
}
