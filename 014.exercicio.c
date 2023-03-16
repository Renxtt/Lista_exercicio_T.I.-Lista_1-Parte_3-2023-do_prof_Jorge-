#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>


main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int x1, x2, a, b, c, resu2, resu3, delta;
	
	
	printf("aX²+bx-c=0\n\n");
	printf("de acordo como a equação acima diga o valor de a: ");
	scanf("%d", &a);
	printf("de acordo como a equação acima diga o valor de b: ");
	scanf("%d", &b);
	printf("de acordo como a equação acima diga o valor de c: ");
	scanf("%d", &c);
	//printf("de acordo como a equação acima diga o valor de x: ");
	//scanf("%d", &x);
	 

	
//	printf("\n\n%.0d*%.0d+%.0d*%.0d-%.0d=0", a, x1, b, x2, c);
	
	delta = pow(b,2)-4*a*c;
	
	if(delta>0){
		resu2 = (-b + sqrt(delta)) / (2*a);
    	resu3 = (-b - sqrt(delta)) / (2*a);
		
		
	}else if(delta<0){
		printf("A equacao nao possui raizes reais.\n");
		resu2 = (-b + sqrt(delta)) / (2*a);
    	resu3 = (-b - sqrt(delta)) / (2*a);
		printf("As raizes dessas equação é X=%d e/ou X=%d", resu2, resu3);
	}else if(delta==0){
		resu2 = (-b + sqrt(delta)) / (2*a);
	    resu3 = (-b - sqrt(delta)) / (2*a);
		resu2 = -b/(2*a);
		printf("A raize dessa equação é X=%d", resu2);		
	}
	
	
	return 0;
}
