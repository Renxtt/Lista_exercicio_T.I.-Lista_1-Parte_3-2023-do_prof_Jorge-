#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <windows.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	char nom1[40], nom2[40], nom3[40], nom4[40], nom5[40], nom6[40], nom7[40], nom8[40];
	char nox1, nox2, nox3, nox4, nox5, nox6, nox7, nox8;
	int gol1, gol2, gol3, gol4, gol5, gol6, gol7, gol8;
	int rand1, rand2, rand3, rand4, rand5, rand6, rand7, rand8; 
	int  rands1, rands2, rands3, rands4, rands5, rands6, rands7, rands8;
	int numerotim1, numerotim2, numerotim3, numerotim4, numerotim5, numerotim6, numerotim7, numerotim8;
	int rodada;
	
	
	srand(time(NULL));

	
	

	do{
	rand1 = rand() % 11;
	rand2 = rand() % 11;
	rand3 = rand() % 11;
	rand4 = rand() % 11;
	rand5 = rand() % 11;
	rand6 = rand() % 11;
	rand7 = rand() % 11;
	rand8 = rand() % 11;		
//	printf("\ntentando novamente");
	
	
	}while(rand1==rand2||rand1==rand3||rand1==rand4||rand1==rand5||rand1==rand6||rand1==rand7||rand1==rand8||rand2==rand3||rand2==rand4||rand2==rand5||rand2==rand6||rand2==rand7||rand2==rand8||rand3==rand4||rand3==rand5||rand3==rand6||rand3==rand7||rand3==rand8||rand4==rand5||rand4==rand6||rand4==rand7||rand4==rand8||rand5==rand7||rand5==rand8||rand6==rand7||rand6==rand8||rand7==rand8);	
	/*
	do{
		rands1 = rand() % 9;
		rands2 = rand() % 9;
	}while((rands1!=rands2)&&(rands1==rands3)&&(rands1==rands5)&&(rands1==rands7)&&(rands2==rands3)&&(rands2==rands5)&&(rands2==rands7));
	do{
		rands3 = rand() % 9;
		rands4 = rand() % 9;
	}while((rands3!=rands4)&&(rands3==rands5)&&(rands3==rands7)&&(rands3==rands1)&&(rands4==rands5)&&(rands3==rands7)&&(rands3==rands1));
	do{
		rands5 = rand() % 9;
		rands6 = rand() % 9;
	}while((rands5!=rands6)&&(rands5==rands2)&&(rands5==rands4)&&(rands5==rands7)&&(rands6==rands2)&&(rands6==rands4)&&(rands6==rands7));
	do{
		rands7 = rand() % 9;
		rands8 = rand() % 9;
	}while((rands7!=rands8)&&(rands7==rands2)&&(rands7==rands3)&&(rands7==rands5)&&(rands8==rands2)&&(rands8==rands3)&&(rands8==rands5));
	*/
	
	
	numerotim1 = 1;
	numerotim2 = 1;
	numerotim3 = 1;
	numerotim4 = 1;
	numerotim5 = 1;	
	numerotim6 = 1;	
	numerotim7 = 1;	
	numerotim8 = 1;
		
//	printf("\n\nrands1: %d\nrands2: %d\nrands3: %d\nrands4: %d\nrands5: %d\nrands6: %d\nrands7: %d\nrands8: %d", rands1, rands2, rands3, rands4, rands5, rands6, rands7, rands8);
	
//	printf("\n\nrand 1: %d\nrand 2: %d\nrand 3: %d\ndrand 4: %d\nrand 5: %d\nrand 6: %d\nrand 7: %d\nrand 8: %d", rand1, rand2, rand3, rand4, rand5, rand6, rand7, rand8);
	
	
//	printf("rand 1: %d\nrand 2: %d\nrand 3: %d\ndrand 4: %d\nrand 5: %d\nrand 6: %d\nrand 7: %d\nrand 8: %d", rand1, rand2, rand3, rand4, rand5, rand6, rand7, rand8);
	
	printf("\n\nDigite o nome de um time: ");
	scanf("%s", &nom1);
	printf("\nDigite um outro nome de um time: ");
	scanf("%s", &nom2);
	printf("\nDigite um outro nome de um time: ");
	scanf("%s", &nom3);
	printf("\nDigite um outro nome de um time: ");
	scanf("%s", &nom4);			
	printf("\nDigite um outro nome de um time: ");
	scanf("%s", &nom5);	
	printf("\nDigite um outro nome de um time: ");
	scanf("%s", &nom6);
	printf("\nDigite um outro nome de um time: ");
	scanf("%s", &nom7);
	printf("\nDigite um outro nome de um time: ");
	scanf("%s", &nom8);	
	
	
	printf("\n\n\nDito isso na primeira rodada os times %s e %s irão se enfrentar\nE os times %s e %s irão se enfrentar\nos times %s e %s irão se enfrentar\nos times %s e %s irão se enfrentar", nom2, nom6, nom4, nom1, nom5, nom3,nom8, nom7);
	printf("\nDurante a primeira fase os times fizeram a seguinte quantia de gols:\nO Time %s fez %d Gols\nO Time %s fez %d Gols\nO Time %s fez %d Gols\nO Time %s fez %d Gols\nO Time %s fez %d Gols\nO Time %s fez %d Gols\nO Time %s fez %d Gols\nO Time %s fez %d Gols", nom1, rand1, nom2, rand2, nom3, rand3, nom4, rand4, nom5, rand5, nom6, rand6, nom7, rand7, nom8, rand8);
	
		
/*	if(rand1>rand2){
		printf("Parabens Time %s Você ganhou do Time %s", nom1, nom2);
		numerotim1=numerotim1+1;
				
	}else if(rand2>rand1){
		printf("Parabens Time %s Você ganhou do Time %s", nom2, nom1);
		numerotim2=numerotim2+1;
		
	while(1){

	for(numerotim1=0;numerotim1<=1;numerotim1++){
		
		if(rand1>rand2){
			printf("\n%s passou de faze", nom1);
			rand1 = rand() % 11;
					
		}else{
			printf("\nTime %s não passou", nom1);
		}
		
	}for(numerotim2=0;numerotim2<=1;numerotim2++){
			
		if(rand2>rand1){	
			printf("\n%s passou de faze", nom2);
			rand2 = rand() % 11;

		}else{
			printf("\nTime %s não passou", nom2);
		}

	}for(numerotim3=0;numerotim3<=1;numerotim3++){
		if(rand3>rand4){
			printf("\n%s passou de faze", nom3);
			rand3 = rand() % 11;
			
		}else{
			printf("\nTime %s não passou", nom3);
		}

	}for(numerotim4=0;numerotim4<=1;numerotim4++){
		if(rand4>rand3){
			printf("\n%s passou de faze", nom4);
			rand4 = rand() % 11;				
						
		}else{
			printf("\nTime %s não passou", nom4);
		}

	}for(numerotim5=0;numerotim5<=1;numerotim5++){
		if(rand5>rand6){
			printf("\n%s passou de faze", nom5);
			rand5 = rand() % 11;
			
		}else{
			printf("\nTime %s não passou", nom5);
		}

	}for(numerotim6=0;numerotim6<=1;numerotim6++){
		if(rand6>rand5){
			printf("\n%s passou de faze", nom6);
			rand6 = rand() % 11;
			
		}else{
			printf("\nTime %s não passou", nom6);
		}

	}for(numerotim7=0;numerotim7<=1;numerotim7++){
		if(rand7>rand8){
			printf("\n%s passou de faze", nom7);
			rand7 = rand() % 11;
				
		}else{
			printf("\nTime %s não passou", nom7);
		}

	}for(numerotim8=0;numerotim8<=1;numerotim8++){
		if(rand8>rand8){
			printf("\n%s passou de faze", nom8);
			rand8 = rand() % 11;
				
		}else{
			printf("\nTime %s não passou", nom8);
		}

	}

	}	
**/
	for(rodada=0;rodada<=3;rodada++){
		do{
			printf("O´la");
		}while(1);
	}
	
	return 0;
}
