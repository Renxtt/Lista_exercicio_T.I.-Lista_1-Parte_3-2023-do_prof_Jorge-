#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	

	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3;
	
	printf("Digite três números dando espaços entre eles: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if(n3>n1&&n1>n2){
		printf("%d é maior que %d e %d é maior que %d", n3, n1, n1, n2);
	}else if(n3>n2&&n2>n1){
		printf("%d é maior que %d e %d é maior que %d", n3, n2, n2, n1);
	}else if(n1>n2&&n2>n3){
		printf("%d é maior que %d e %d é maior que %d", n1, n2, n2, n3);
	}else if(n1>n3&&n3>n2){
		printf("%d é maior que %d e %d é maior que %d", n1, n3, n3, n2);
	}else if(n2>n1&&n1>n3){
		printf("%d é maior que %d e %d é maior que %d", n2, n1, n1, n3);
	}else if(n2>n3&&n3>n2){
		printf("%d é maior que %d e %d é maior que %d", n2, n3, n3, n2);
	}
	return 0;	
}
