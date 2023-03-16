#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void){
	int id;
	
	
	
	printf("Qual é a sua Idade:");
	scanf("%d", &id);
	
	if(id<=10){
		printf("\n\n\nSua idade é %d\nVocê esta na classe Infantil", id);
		
	}else if(id<=17&&id>10){
		printf("\n\n\nSua idade é %d\nVocê esta na classe Juvenil", id);
	}else if(id>18){
		printf("\n\n\nSua idade é %d\nVocê esta na classe Senior", id);
	}
	return 0;
}
