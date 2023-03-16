#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <conio.h>

int main(void){
	
// estou usando http://linguagemc.com.br/exibindo-data-e-hora-com-time-h/ como base
//https://www.unicamp.br/fea/ortega/info/aula09.htm#:~:text=Para%20armazenar%20uma%20string%20literal,vari%C3%A1vel%20string%20na%20primeira%20posi%C3%A7%C3%A3o.

	
	
	setlocale(LC_ALL, "portuguese");
//	system("color f c");
	system("color 02");
	int sec, min, hora, dian, dia2, dia3, mesn, anon, extra;
	char diaf[40], diaf2[40], mesf[40], mesf2[40], texte[40];	
	int nu_cartao01, nu_cartao02, nu_cartao03, nu_cartao04, nu_cartao05, nu_cartao06, nu_cartao07, nu_cartao08, nu_cartao09, nu_cartao10, nu_cartao11, nu_cartao12, nu_cartao13, nu_cartao14, nu_cartao15, nu_cartao16;
	int pin, opcao, opcao_de_retirada, opcao_de_retirada_2, opcao_de_retirada_cpf, randomico_da_senha_1, randomico_da_senha_2, randomico_da_senha_3, randomico_da_senha_4, tentativa_senha, soma_senha;
	int randomico_base_dindin, sub_de_dindin, resu_dindin, numb_numb_conta, rand_de_nome, tentativa_senha_2, sobra_dindin;
	char randomico_senha_g, resu_rand_nome[40], input4;
	char input, input2, input3, nome_do_participante[40], pergunta_de_finalizacao[40];
	
    unsigned int cp = 1252; 
    unsigned int cpin  = GetConsoleCP();
    unsigned int cpout = GetConsoleOutputCP();

    SetConsoleCP(cp);       
    SetConsoleOutputCP(cp);  

	srand(time(NULL));
	
	randomico_da_senha_1 = rand() % 9;
	randomico_da_senha_2 = rand() % 9;
	randomico_da_senha_3 = rand() % 9;
	randomico_da_senha_4 = rand() % 9;
	
	randomico_base_dindin = (rand() % 2000000);

	rand_de_nome = rand() % 11;

	soma_senha = (randomico_da_senha_1*1000)+(randomico_da_senha_2*100)+(randomico_da_senha_3*10)+(randomico_da_senha_4);
	
	printf("%d", soma_senha);
	struct tm *ano_local;
	
	
	time_t ano;
	time(&ano);
	
	ano_local = localtime(&ano);
	sec = (ano_local->tm_sec);
	min = (ano_local->tm_min);
	hora = (ano_local->tm_hour); 
	dian = (ano_local->tm_wday);
	dia2 = (ano_local->tm_mday);
	dia3 =(ano_local->tm_yday);
	mesn = (ano_local->tm_mon+1);
	anon = (ano_local->tm_year+1900);
	if(dian==0){
		strcpy(diaf, "Domingo");
		strcpy(diaf2, "Sunday");				
	}else if(dian==1){
		strcpy(diaf, "Segunda-Feira");
		strcpy(diaf2, "Manday");		
	}else if(dian==2){
		strcpy(diaf, "Terça-Feira");
		strcpy(diaf2, "Tuesday");		
	}else if(dian==3){
		strcpy(diaf, "Quarta-Feira");
		strcpy(diaf2, "Wednesday");		
	}else if(dian==4){
		strcpy(diaf, "Quinta-Feira");
		strcpy(diaf2, "Thursday");		
	}else if(dian==5){
		strcpy(diaf, "Sexta-Feira");
		strcpy(diaf2, "Friday");		
	}else if(dian==6){
		strcpy(diaf, "Sábado");
		strcpy(diaf2, "Saturday");		
	}else if(dian!=0||dian!=1||dian!=2||dian!=3||dian!=4||dian!=5||dian!=6){
		printf("Deu erro");
		strcpy(diaf, "Dia da semana Inesistente");
		strcpy(diaf2, "Dia da semana Inesistente");
	}
	
	
	if(rand_de_nome==0){
		strcpy(resu_rand_nome, "Rafael");
	}else if(rand_de_nome==1){
		strcpy(resu_rand_nome, "Daniel");
	}else if(resu_rand_nome==2){
		strcpy(resu_rand_nome, "Allan");
	}else if(rand_de_nome==3){
		strcpy(resu_rand_nome, "Arthur");
	}else if(rand_de_nome==4){
		strcpy(resu_rand_nome, "Eli");
	}else if(rand_de_nome==5){
		strcpy(resu_rand_nome, "Paola");
	}else if(rand_de_nome==6){
		strcpy(resu_rand_nome, "GioBri");
	}else if(rand_de_nome==7){
		strcpy(resu_rand_nome, "Laura");
	}else if(rand_de_nome==8){
		strcpy(resu_rand_nome, "Pietro");
	}else if(rand_de_nome==9){
		strcpy(resu_rand_nome, "Lucena");
	}else if(rand_de_nome==10){
		strcpy(resu_rand_nome, "Sanji");
	}
	
	
//	printf("\n%s", diaf);
//	printf("\n%s", diaf2);
	
	//fazer o mesmo para mes
	if(mesn==1){
		strcpy(mesf, "Janeiro");
		strcpy(mesf, "January");
	}if(mesn==2){
		strcpy(mesf, "Fevereiro");
		strcpy(mesf2, "February");		
	}if(mesn==3){
		strcpy(mesf, "Março");
		strcpy(mesf2, "Mars");		
	}if(mesn==4){
		strcpy(mesf, "Abril");
		strcpy(mesf2, "April");		
	}if(mesn==5){
		strcpy(mesf, "Maio");
		strcpy(mesf2, "May");		
	}if(mesn==6){
		strcpy(mesf, "Junho");
		strcpy(mesf2, "June");		
	}if(mesn==7){
		strcpy(mesf, "Julho");
		strcpy(mesf2, "July");		
	}if(mesn==8){
		strcpy(mesf, "Agosto");
		strcpy(mesf2, "August");		
	}if(mesn==9){
		strcpy(mesf, "Setembro");
		strcpy(mesf2, "September");		
	}if(mesn==10){
		strcpy(mesf, "Outubro");
		strcpy(mesf2, "October");		
	}if(mesn==11){
		strcpy(mesf, "Novembro");
		strcpy(mesf2, "November");
	}if(mesn==12){
		strcpy(mesf, "Dezembro");
		strcpy(mesf2, "December");		
	}if(mesn<=0&&mesn>=11){
		strcpy(mesf, "Mês Inesistente");
		strcpy(mesf2, "Mês Inesistente");
	}

//	printf("\n%s", mesf);
	//printf("\n%s", mesf2);
	
	extra=0;

//iniciar a maquina
	//printf("%d", dian);
	
	printf("\n\n                   Digite o seu nome com até 10 caracteres:");
	fgets(nome_do_participante,10,stdin);
	
	
	printf("\n______________________________________________________________________________");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	if(dia2<10&&mesn<10){
		printf("\n||                                                Data: %d%d/%d%d/%d        ||", extra, dia2, extra, mesn, anon);		
	}else if(dia2<10&&mesn>=10){
		printf("\n||                                                Data: %d%d/%d/%d          ||", extra, dia2, mesn, anon);		
	}else if(dia2>=10&&mesn>=10){
			printf("\n||                                                Data: %d/%d/%d          ||", dia2, mesn, anon);
	}else if(dia2>=10&&mesn<10){
		printf("\n||                                                Data: %d/%d%d/%d          ||", dia2, extra, mesn, anon);		
	}
	Sleep(50);
	if(hora<10&&min<10&&sec<10){
		printf("\n||                                                Horario: %d%d:%d%d:%d%d         ||", extra, hora, extra, min, extra, sec);			
	}else if(hora<10&&min>=10&&sec<10){
		printf("\n||                                                Horario: %d%d:%d:%d%d         ||", extra, hora, min, extra, sec);			
	}else if(hora<10&&min<10&&sec>=10){
		printf("\n||                                                Horario: %d%d:%d%d:%d         ||", extra, hora, extra, min, sec);			
	}else if(hora<10&&min>=10&&sec>=10){
		printf("\n||                                                Horario: %d%d:%d:%d         ||", extra, hora, min, sec);	
	}else if(hora>=10&&min<10&&sec<10){
		printf("\n||                                                Horario: %d:%d%d:%d%d         ||", hora, extra, min, extra, sec);			
	}else if(hora>=10&&min>=10&&sec<10){
		printf("\n||                                                Horario: %d:%d:%d%d         ||", hora, min, extra, sec);	
	}else if(hora>=10&&min<10&&sec<10){
		printf("\n||                                                Horario: %d:%d%d:%d         ||", hora, extra, min, sec);	
	}else if(hora>=10&&min>=10&&sec>=10){
			printf("\n||                                                Horario: %d:%d:%d         ||", hora, min, sec);	
	}/*else if(sec<10&&min>=10){
		printf("\n||                                                Horario: %d:%d:%d%d         ||", hora, min, extra, sec);			
	}else if(min>=10&&sec<10){
		printf("\n||                                                Horario: %d:%d:%d%d         ||", hora, min,extra, sec);						
	}else if(sec>=10&&min<10){
		printf("\n||                                                Horario: %d:%d%d:%d         ||", hora,extra, min, sec);				
	}else if(sec>=10&&min>=10){
		printf("\n||                                                Horario: %d:%d:%d         ||", hora, min, sec);	
	}else if(min<10&&sec<10){
		printf("\n||                                                Horario: %d:%d%d:%d%d         ||", hora, extra, min, extra, sec);					
	}
	
	else if(sec<10){
		printf("\n||                                                Horario: %d:%d:%d%d         ||", hora, min, extra, sec);	
	}else if(min>=10){
		printf("\n||                                                Horario: %d:%d:%d         ||", hora, min, sec);				
	}*/
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                        Olá Eu sou um caixa Eletronico                    ||");
	Sleep(50);
	printf("\n||                               feito por: Rafael                          ||");
	Sleep(50);
	if(strcmp(diaf, "Sábado")==0){
		printf("\n||                                                    Dia: %s           ||", diaf);
		printf("\n||                                                    Day: %s         ||", diaf2);			
	}else if(strcmp(diaf, "Segunda-Feira")==0){
		printf("\n||                                                    Dia: %s    ||", diaf);
		printf("\n||                                                    Day: %s           ||", diaf2);
	}else if(strcmp(diaf, "Terça-Feira")==0){
		printf("\n||                                                    Dia: %s      ||", diaf);
		printf("\n||                                                    Day: %s          ||", diaf2);
	}else if(strcmp(diaf, "Quarta-Feira")==0){
		printf("\n||                                                    Dia: %s     ||", diaf);
		printf("\n||                                                    Day: %s        ||", diaf2);		
	}else if(strcmp(diaf, "Quinta-Feira")==0){
		printf("\n||                                                    Dia: %s     ||", diaf);
		printf("\n||                                                    Day: %s         ||", diaf2);				
	}else if(strcmp(diaf, "Sexta-Feira")==0){
		printf("\n||                                                    Dia: %s      ||", diaf);
		printf("\n||                                                    Day: %s           ||", diaf2);				
	}else if(strcmp(diaf, "Domingo")==0){
		printf("\n||                                                    Dia: %s          ||", diaf);
		printf("\n||                                                    Day: %s           ||", diaf2);						
	}else {
		printf("\n\t\t       deu erado a parte dos dias de semana");
	}
	
	Sleep(50);
	printf("\n||                                                                          ||");	
	Sleep(50);
	if(strcmp(mesf, "Março")==0){
		printf("\n||                                                    Mês: %s            ||", mesf);
		printf("\n||                                                    Month: %s           ||", mesf2);			
	}else if(strcmp(mesf, "Abril")==0){
		printf("\n||                                                    Mês: %s            ||", mesf);
		printf("\n||                                                    Month: %s          ||", mesf2);					
	}else if(strcmp(mesf, "Maio")==0){
		printf("\n||                                                    Mês: %s             ||", mesf);
		printf("\n||                                                    Month: %s            ||", mesf2);					
	}else if(strcmp(mesf, "Junho")==0){
		printf("\n||                                                    Mês: %s            ||", mesf);
		printf("\n||                                                    Month: %s           ||", mesf2);						
	}else if(strcmp(mesf, "Julho")==0){
		printf("\n||                                                    Mês: %s            ||", mesf);
		printf("\n||                                                    Month: %s           ||", mesf2);							
	}else if(strcmp(mesf, "Agosto")==0){
		printf("\n||                                                    Mês: %s           ||", mesf);
		printf("\n||                                                    Month: %s         ||", mesf2);						
	}else if(strcmp(mesf, "Setembro")==0){
		printf("\n||                                                    Mês: %s         ||", mesf);
		printf("\n||                                                    Month: %s      ||", mesf2);						
	}else if(strcmp(mesf, "Outubro")==0){
		printf("\n||                                                    Mês: %s          ||", mesf);
		printf("\n||                                                    Month: %s        ||", mesf2);						
	}else if(strcmp(mesf, "Novembro")==0){
		printf("\n||                                                    Mês: %s         ||", mesf);
		printf("\n||                                                    Month: %s       ||", mesf2);							
	}else if(strcmp(mesf, "Dezembro")==0){
		printf("\n||                                                    Mês: %s         ||", mesf);
		printf("\n||                                                    Month: %s       ||", mesf2);									
	}else{
		printf("Deu errado a parte dos meses");
	}
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n||                                                                          ||");
	Sleep(50);
	printf("\n______________________________________________________________________________");
	printf("\n\n\n------------------------------------------------------------------------------");
	printf("\n||                            De Enter para seguir                          ||");
	printf("\n------------------------------------------------------------------------------");
	
//dar seus dados
	input = getchar();
		
	if(input=='\n'){
		if((strcmp(diaf, "Domingo")==0&&hora>=12&&min>=00&&sec>=00)){
			printf("\n\n\n----------------------------------------------------------------------------------------------------");
			printf("\n||Sinto muito mas por hoje ser %s e já passado do meio dia não será possivel fazer a retirada||", diaf);
			printf("\n----------------------------------------------------------------------------------------------------");
			printf("\n\n Voçê quer continuar mesmo sendo final de semana?(sim ou não):");
			fgets(pergunta_de_finalizacao, 40, stdin);
			if(strcmp(pergunta_de_finalizacao, "Sim")==0||strcmp(pergunta_de_finalizacao, "sim")==0){
				printf("Entendo");
			}else if(strcmp(pergunta_de_finalizacao, "não")==0||strcmp(pergunta_de_finalizacao, "não")==0){
				abort();
			}
		}else if((strcmp(diaf, "Sábado")==0&&hora>=15&&min>=00&&sec>=00)){
			printf("\n\n\n------------------------------------------------------------------------------------------------------------");
			printf("\n||Sinto muito mas por hoje ser %s e já passado das 15 Horas não será possivel fazer a retirada de dinheiro||", diaf);
			printf("\n------------------------------------------------------------------------------------------------------------\n\n\n");
			printf("\n\n Voçê quer continuar mesmo sendo final de semana?(sim ou não):");
			fgets(pergunta_de_finalizacao, 40, stdin);
			if(strcmp(pergunta_de_finalizacao, "Sim")==0||strcmp(pergunta_de_finalizacao, "sim")==0){
				printf("Entendo");
			}else if(strcmp(pergunta_de_finalizacao, "Não")==0||strcmp(pergunta_de_finalizacao, "não")==0){
				abort();
			}		
		}
		
			system("Cls");
			Sleep(50);			
			printf("\n______________________________________________________________________________");	
			Sleep(50);		
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                Insira o seu proposito nas opções abaixo:                 ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                            1-Retirar Dinheiro                            ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);		
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");
			Sleep(50);	
			printf("\n||                                                                          ||");
			Sleep(50);
			printf("\n||                                                                          ||");			
			Sleep(50);
			printf("\n______________________________________________________________________________");	
		
			printf("\n\n\n------------------------------------------------------------------------------");
			printf("\n||                    Insirá o número da escolha de sua opção            ||\n\t\t\t\t\t");
			scanf("%d", &opcao);
			printf("------------------------------------------------------------------------------");
			Sleep(2000);
		switch (opcao) {
			case 1:
	
				system("Cls");
				Sleep(50);
				printf("\n______________________________________________________________________________");	
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||         Insira o seu Metodo para entrar em sua conta de Dinheiro:        ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                            1-Retirar Via Tranferencia Bancaria           ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50); 
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");
				Sleep(50);
				printf("\n||                                                                          ||");			
				Sleep(50);
				printf("\n______________________________________________________________________________");
		
				printf("\n\n\n------------------------------------------------------------------------------");
				printf("\n||                    Insirá o número da escolha de sua opção            ||\n\t\t\t\t\t");
				scanf("%d", &opcao_de_retirada);
				printf("------------------------------------------------------------------------------");
				Sleep(2000);
			
				switch (opcao_de_retirada) {
					case 1:

						system("Cls");
						Sleep(50);
						printf("\n______________________________________________________________________________");	
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||               Insira o seu metodo para retirar o seu Dinheiro:           ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                            1-CPF                                         ||");
						Sleep(50);
						printf("\n||                            2-PIX                                         ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");
						Sleep(50);
						printf("\n||                                                                          ||");			
						Sleep(50);
						printf("\n______________________________________________________________________________");
						
						printf("\n\n\n------------------------------------------------------------------------------");
						printf("\n||                    Insirá o número da escolha de sua opção            ||\n\t\t\t\t\t");
						scanf("%d", &opcao_de_retirada_2);
						printf("------------------------------------------------------------------------------");
						Sleep(2000);						
						
						switch (opcao_de_retirada_2) {
							case 1:
								system("Cls");
								printf("\n\n\n------------------------------------------------------------------------------");
								printf("\n||                            O Escolhido foi CPF                           ||");
								printf("\n------------------------------------------------------------------------------");			
								printf("\n______________________________________________________________________________");	
								Sleep(50);
								printf("\n||                                                                          ||");
								Sleep(50);
								printf("\n||                Insira o seu CPF para retirar o seu Dinheiro:             ||");
								Sleep(50);
								printf("\n||                          A acid é a senha inverça                        ||");
								Sleep(50);
								printf("\n||                                                                          ||");
								Sleep(50);
								printf("\n||                                  Dica: %d%d%d%d                              ||",randomico_da_senha_4, randomico_da_senha_3, randomico_da_senha_2,randomico_da_senha_1);
								Sleep(50);
								printf("\n||                        Digite o seu PIN de 4 digitos");
								scanf("%d", &tentativa_senha);
								Sleep(50);
								printf("\n||                Digite o valor que irá subtrair do valor total            || ");
								Sleep(50);


								if(tentativa_senha==soma_senha){
									

									printf("\n||                     Sua conta foi achada com sucesso                     ||");
									Sleep(50);
									if(randomico_base_dindin<=9){
									printf("\n||                             Seu Saldo é: %d R$                            ||", randomico_base_dindin);
									Sleep(50);
									}else if(randomico_base_dindin<=99&&randomico_base_dindin    >=10){
									printf("\n||                             Seu Saldo é: %d R$                           ||", randomico_base_dindin);
									Sleep(50);
										
									}else if(randomico_base_dindin<=999&&randomico_base_dindin   >=100){
									printf("\n||                             Seu Saldo é: %d R$                          ||", randomico_base_dindin);
									Sleep(50);
	
									}else if(randomico_base_dindin<=9999&&randomico_base_dindin  >=1000){
									printf("\n||                             Seu Saldo é: %d R$                         ||", randomico_base_dindin);
									Sleep(50);
	
									}else if(randomico_base_dindin<=99999&&randomico_base_dindin >=10000){
									printf("\n||                             Seu Saldo é: %d R$                        ||", randomico_base_dindin);
									Sleep(50);
	
									}else if(randomico_base_dindin<=999999&&randomico_base_dindin>=100000){
									printf("\n||                             Seu Saldo é: %d R$                       ||", randomico_base_dindin);
									Sleep(50);
	
									}else if(randomico_base_dindin<=9999999&&randomico_base_dindin>=1000000){
									printf("\n||                             Seu Saldo é: %d R$                      ||", randomico_base_dindin);
									Sleep(50);
	
									}
									printf("\n||                                                                          ||");
									Sleep(50);
									printf("\n||                Digite o valor que irá subtrair do valor total:\n\t\t\t\t\t");
									scanf("%d", &sub_de_dindin);
									Sleep(50);
									
									sobra_dindin = randomico_base_dindin-sub_de_dindin;

									sub_de_dindin = (sub_de_dindin)*(-1);									
									printf("\n||                                                                          ||");
									Sleep(50);
									if(randomico_base_dindin<=9){
									printf("\n||                             Seu Saldo é: %d R$                            ||", randomico_base_dindin);
									Sleep(50);
									}else if(randomico_base_dindin<=99&&randomico_base_dindin    >=10){
									printf("\n||                             Seu Saldo é: %d R$                           ||", randomico_base_dindin);
									Sleep(50);
										
									}else if(randomico_base_dindin<=999&&randomico_base_dindin   >=100){
									printf("\n||                             Seu Saldo é: %d R$                          ||", randomico_base_dindin);
									Sleep(50);
	
									}else if(randomico_base_dindin<=9999&&randomico_base_dindin  >=1000){
									printf("\n||                             Seu Saldo é: %d R$                         ||", randomico_base_dindin);
									Sleep(50);
	
									}else if(randomico_base_dindin<=99999&&randomico_base_dindin >=10000){
									printf("\n||                             Seu Saldo é: %d R$                        ||", randomico_base_dindin);
									Sleep(50);
	
									}else if(randomico_base_dindin<=999999&&randomico_base_dindin>=100000){
									printf("\n||                             Seu Saldo é: %d R$                       ||", randomico_base_dindin);
									Sleep(50);
	
									}else if(randomico_base_dindin<=9999999&&randomico_base_dindin>=1000000){
									printf("\n||                             Seu Saldo é: %d R$                      ||", randomico_base_dindin);
									Sleep(50);
	
									}
									Sleep(50);
									if(sub_de_dindin<=9){
									printf("\n||                                   Menos: %d R$                         ||", sub_de_dindin);
									Sleep(50);
									}else if(sub_de_dindin<=99&&sub_de_dindin    >=10){
									printf("\n||                                   Menos: %d R$                        ||", sub_de_dindin);
									Sleep(50);
										
									}else if(sub_de_dindin<=999&&sub_de_dindin   >=100){
									printf("\n||                                   Menos: %d R$                       ||", sub_de_dindin);
									Sleep(50);
	
									}else if(sub_de_dindin<=9999&&sub_de_dindin  >=1000){
									printf("\n||                                   Menos: %d R$                      ||", sub_de_dindin);
									Sleep(50);
	
									}else if(sub_de_dindin<=99999&&sub_de_dindin >=10000){
									printf("\n||                                   Menos: %d R$                     ||", sub_de_dindin);
									Sleep(50);
	
									}else if(sub_de_dindin<=999999&&sub_de_dindin>=100000){
									printf("\n||                                   Menos: %d R$                    ||", sub_de_dindin);
									Sleep(50);
	
									}else if(sub_de_dindin<=9999999&&sub_de_dindin>=1000000){
									printf("\n||                                   Menos: %d R$                   ||", sub_de_dindin);
									Sleep(50);
	
									}else{
									printf("\n||                                   Menos: %d R$", sub_de_dindin);
									}
									
									sobra_dindin = randomico_base_dindin-sub_de_dindin;
									
									if(resu_dindin<=9){
									printf("\n||                                   sobra: %d R$                          ||", sobra_dindin);	
									Sleep(50);
									}else if(resu_dindin<=99&&resu_dindin    >=10){
									printf("\n||                                   sobra: %d R$                         ||", sobra_dindin);	
									Sleep(50);
										
									}else if(resu_dindin<=999&&resu_dindin   >=100){
									printf("\n||                                   sobra: %d R$                        ||", sobra_dindin);	
									Sleep(50);
		
									}else if(resu_dindin<=9999&&resu_dindin  >=1000){
									printf("\n||                                   sobra: %d R$                       ||", sobra_dindin);	
									Sleep(50);
		
	
									}else if(resu_dindin<=99999&&resu_dindin >=10000){
									printf("\n||                                   sobra: %d R$                      ||", sobra_dindin);	
									Sleep(50);
	
									}else if(resu_dindin<=999999&&resu_dindin>=100000){
									printf("\n||                                   sobra: %d R$                     ||", sobra_dindin);	
									Sleep(50);
		
									}else if(resu_dindin<=9999999&&resu_dindin>=1000000){
									printf("\n||                                    sobra:%d R$                   ||", sobra_dindin);	
									Sleep(50);
		
									}else{
									printf("\n||                                   Sobra: %d R$", sobra_dindin);
									}									
									sobra_dindin = randomico_base_dindin-resu_dindin;
																				
									Sleep(50);
									printf("\n______________________________________________________________________________\n\n");
									Sleep(2000);
									

									printf("\n\n\n\n\n\n\n\n\n\n\n------------------------------------------------------------------------------");
									printf("\n                                                                              ");
									printf("\n                                  BOLETO                                      ");
									printf("\n                                                                              ");
									printf("\n                                  Dia: %s", diaf);
									printf("\n                                  Day: %s", diaf2);
									if(hora<10&&min<10&&sec<10){
										printf("\n                               Horario: %d%d:%d%d:%d%d    ", extra, hora, extra, min, extra, sec);			
									}else if(hora<10&&min>=10&&sec<10){
										printf("\n                               Horario: %d%d:%d:%d%d     ", extra, hora, min, extra, sec);			
									}else if(hora<10&&min<10&&sec>=10){
										printf("\n                               Horario: %d%d:%d%d:%d     ", extra, hora, extra, min, sec);			
									}else if(hora<10&&min>=10&&sec>=10){
										printf("\n                               Horario: %d%d:%d:%d       ", extra, hora, min, sec);	
									}else if(hora>=10&&min<10&&sec<10){
										printf("\n                               Horario: %d:%d%d:%d%d     ", hora, extra, min, extra, sec);			
									}else if(hora>=10&&min>=10&&sec<10){
										printf("\n                               Horario: %d:%d:%d%d       ", hora, min, extra, sec);	
									}else if(hora>=10&&min<10&&sec<10){
										printf("\n                               Horario: %d:%d%d:%d       ", hora, extra, min, sec);	
									}else if(hora>=10&&min>=10&&sec>=10){
										
											printf("\n                    Horario: %d:%d:%d         ", hora, min, sec);	
									}	
									printf("\n                             Estilo da Transação: CPF");
									printf("\n  Nome de quem pagará: %s", nome_do_participante);
									printf("                                               Saldo Inicial de Hoje: %d R$                       ", randomico_base_dindin);
									printf("\n                                                                              ");
									printf("\n  Nome de quem receberá: %d", resu_rand_nome);
									printf("\n                                             Saldo Final: %d R$                      ", sobra_dindin);
									printf("\n                                                                              ");
									printf("\n  Quando esse dinheiro cairá na conta: em 3 horas no maximo                   ");
									printf("\n                                                                              ");
									printf("\n------------------------------------------------------------------------------");									
									abort();
								}						
								break;
							case 2:

								system("Cls");
								printf("\n\n\n------------------------------------------------------------------------------");
								printf("\n||                            O Escolhido foi PIX                           ||");
								printf("\n------------------------------------------------------------------------------");
								
								Sleep(50);
								printf("\n______________________________________________________________________________");
								Sleep(50);
								printf("\n||        Digite o Número da conta na qual você quer passar esse pix:       ||");
								Sleep(50);
								Sleep(50);
								printf("\n||                       sendo um telefone esse número                      ||");
							
								printf("\n                                   ");
								scanf("%d", pergunta_de_finalizacao);
								printf("\n||                  A conta que você esta tentando transferir               ||");
								Sleep(50);
								
								if(rand_de_nome==0){
								printf("\n||                              É   do Robison                              ||");
								Sleep(50);

								}else if(rand_de_nome==1){
								printf("\n||                              É   do Daniel                               ||");
								Sleep(50);
							
								}else if(rand_de_nome==2){
								printf("\n||                              É   do Allan                                ||");
								Sleep(50);
									
								}else if(rand_de_nome==3){
								printf("\n||                              É   do Arthur                               ||");
								Sleep(50);
									
								}else if(rand_de_nome==4){
								printf("\n||                              É   da Eli                                  ||");
								Sleep(50);
									
								}else if(rand_de_nome==5){
								printf("\n||                              É   da Paola                                ||");
								Sleep(50);
									
								}else if(rand_de_nome==6){
								printf("\n||                              É   do GioBri                               ||");
								Sleep(50);
									
								}else if(rand_de_nome==7){
								printf("\n||                              É   da Laura                                ||");
								Sleep(50);
									
								}else if(rand_de_nome==8){
								printf("\n||                              É   do Yhan                                 ||");
								Sleep(50);
									
								}else if(rand_de_nome==9){
								printf("\n||                              É   do Lucena                               ||");
								Sleep(50);
									
								}else if(rand_de_nome==10){
								printf("\n||                              É   do Sanji                                ||");
								Sleep(50);
									
								}
								

								printf("\n||                                                                          ||");
								Sleep(50);
								printf("\n||                                                                          ||");
								printf("\n______________________________________________________________________________");					
								
								printf("\n\n\n------------------------------------------------------------------------------");
								printf("\n||                      Se correto De Tab para seguir                       ||");
								printf("\n------------------------------------------------------------------------------");
								
								input3 = getch();
								
								if(input3=='\t'){
									system("Cls");
									printf("\n______________________________________________________________________________");	
									Sleep(50);
									printf("\n||                                                                          ||");
									Sleep(50);
									printf("\n||                Insira o sua senha para transferir o seu Dinheiro:        ||");
									Sleep(50);
									printf("\n||                          A acid é a senha inverça                        ||");
									Sleep(50);
									printf("\n||                                                                          ||");
									Sleep(50);
									printf("\n||                                  Dica: %d%d%d%d                              ||",randomico_da_senha_4, randomico_da_senha_3, randomico_da_senha_2,randomico_da_senha_1);
									Sleep(50);
									printf("\n||                         Digite o seu PIN de 4 digitos                    ||");
									Sleep(50);
									printf("\n||                Digite o valor que irá subtrair do valor total:\n\t\t\t\t\t");
									scanf("%d", &tentativa_senha_2);
									Sleep(50);
	
	
									if(tentativa_senha_2==soma_senha){
										
	
										printf("\n||                     Sua conta foi achada com sucesso                     ||");
										Sleep(50);
										if(randomico_base_dindin<=9){
										printf("\n||                             Seu Saldo é: %d R$                            ||", randomico_base_dindin);
										Sleep(50);
										}else if(randomico_base_dindin<=99&&randomico_base_dindin    >=10){
										printf("\n||                             Seu Saldo é: %d R$                           ||", randomico_base_dindin);
										Sleep(50);
											
										}else if(randomico_base_dindin<=999&&randomico_base_dindin   >=100){
										printf("\n||                             Seu Saldo é: %d R$                          ||", randomico_base_dindin);
										Sleep(50);
		
										}else if(randomico_base_dindin<=9999&&randomico_base_dindin  >=1000){
										printf("\n||                             Seu Saldo é: %d R$                         ||", randomico_base_dindin);
										Sleep(50);
		
										}else if(randomico_base_dindin<=99999&&randomico_base_dindin >=10000){
										printf("\n||                             Seu Saldo é: %d R$                        ||", randomico_base_dindin);
										Sleep(50);
		
										}else if(randomico_base_dindin<=999999&&randomico_base_dindin>=100000){
										printf("\n||                             Seu Saldo é: %d R$                       ||", randomico_base_dindin);
										Sleep(50);
		
										}else if(randomico_base_dindin<=9999999&&randomico_base_dindin>=1000000){
										printf("\n||                             Seu Saldo é: %d R$                      ||", randomico_base_dindin);
										Sleep(50);
		
										}
										printf("\n||                                                                          ||");
										Sleep(50);
										printf("\n||                      Quanto você irá tirar dessa conta:\n\t\t\t\t\t");
										scanf("%d", &sub_de_dindin);
										Sleep(50);
										
										sub_de_dindin = (sub_de_dindin)*(-1);
										printf("\n||                                                                          ||");
										Sleep(50);
										if(randomico_base_dindin<=9){
										printf("\n||                             Seu Saldo é: %d R$                            ||", randomico_base_dindin);
										Sleep(50);
										}else if(randomico_base_dindin<=99&&randomico_base_dindin    >=10){
										printf("\n||                             Seu Saldo é: %d R$                           ||", randomico_base_dindin);
										Sleep(50);
											
										}else if(randomico_base_dindin<=999&&randomico_base_dindin   >=100){
										printf("\n||                             Seu Saldo é: %d R$                          ||", randomico_base_dindin);
										Sleep(50);
		
										}else if(randomico_base_dindin<=9999&&randomico_base_dindin  >=1000){
										printf("\n||                             Seu Saldo é: %d R$                         ||", randomico_base_dindin);
										Sleep(50);
		
										}else if(randomico_base_dindin<=99999&&randomico_base_dindin >=10000){
										printf("\n||                             Seu Saldo é: %d R$                        ||", randomico_base_dindin);
										Sleep(50);
		
										}else if(randomico_base_dindin<=999999&&randomico_base_dindin>=100000){
										printf("\n||                             Seu Saldo é: %d R$                       ||", randomico_base_dindin);
										Sleep(50);
		
										}else if(randomico_base_dindin<=9999999&&randomico_base_dindin>=1000000){
										printf("\n||                             Seu Saldo é: %d R$                      ||", randomico_base_dindin);
										Sleep(50);
		
										}
										sub_de_dindin= sub_de_dindin*(-1);
										Sleep(50);
										if(sub_de_dindin<=9){
										printf("\n||            Quanto deseja enviar via pix: %d R$                            ||", sub_de_dindin);
										Sleep(50);
										}else if(sub_de_dindin<=99&&sub_de_dindin    >=10){
										printf("\n||            Quanto deseja enviar via pix: %d R$                           ||", sub_de_dindin);
										Sleep(50);
											
										}else if(sub_de_dindin<=999&&sub_de_dindin   >=100){
										printf("\n||            Quanto deseja enviar via pix: %d R$                          ||", sub_de_dindin);
										Sleep(50);
		
										}else if(sub_de_dindin<=9999&&sub_de_dindin  >=1000){
										printf("\n||            Quanto deseja enviar via pix: %d R$                         ||", sub_de_dindin);
										Sleep(50);
		
										}else if(sub_de_dindin<=99999&&sub_de_dindin >=10000){
										printf("\n||            Quanto deseja enviar via pix: %d R$                        ||", sub_de_dindin);
										Sleep(50);
		
										}else if(sub_de_dindin<=999999&&sub_de_dindin>=100000){
										printf("\n||            Quanto deseja enviar via pix: %d R$                       ||", sub_de_dindin);
										Sleep(50);
		
										}else if(sub_de_dindin<=9999999&&sub_de_dindin>=1000000){
										printf("\n||            Quanto deseja enviar via pix: %d R$                      ||", sub_de_dindin);
										Sleep(50);
		
										}else{
										printf("\n||            Quanto deseja enviar via pix: %d R$", sub_de_dindin);
										}
										
										sobra_dindin = randomico_base_dindin-sub_de_dindin;
										
										if(resu_dindin<=9){
										printf("\n||                                   sobra: %d R$                          ||", sobra_dindin);	
										Sleep(50);
										}else if(resu_dindin<=99&&resu_dindin    >=10){
										printf("\n||                                   sobra: %d R$                         ||", sobra_dindin);	
										Sleep(50);
											
										}else if(resu_dindin<=999&&resu_dindin   >=100){
										printf("\n||                                   sobra: %d R$                        ||", sobra_dindin);	
										Sleep(50);
			
										}else if(resu_dindin<=9999&&resu_dindin  >=1000){
										printf("\n||                                   sobra: %d R$                       ||", sobra_dindin);	
										Sleep(50);
			
		
										}else if(resu_dindin<=99999&&resu_dindin >=10000){
										printf("\n||                                   sobra: %d R$                      ||", sobra_dindin);	
										Sleep(50);
		
										}else if(resu_dindin<=999999&&resu_dindin>=100000){
										printf("\n||                                   sobra: %d R$                     ||", sobra_dindin);	
										Sleep(50);
			
										}else if(resu_dindin<=9999999&&resu_dindin>=1000000){
										printf("\n||                                    sobra:%d R$                   ||", sobra_dindin);	
										Sleep(50);
			
										}else{
										printf("\n||                                   Sobra: %d R$", sobra_dindin);
										}											
										Sleep(50);
										printf("\n||                                                                          ||");
										Sleep(50);
										printf("\n||                           Pronto dinheir Enviado                         ||");
										Sleep(50);
										printf("\n||                                                                          ||");
										Sleep(50);
										printf("\n______________________________________________________________________________\n\n");
										Sleep(2000);
										
										
										printf("\n\n\n\n\n\n\n\n\n\n\n------------------------------------------------------------------------------");
										printf("\n                                                                              ");
										printf("\n                                  BOLETO                                      ");
										printf("\n                                                                              ");
										printf("\n                                  Dia: %s", diaf);
										printf("\n                                  Day: %s", diaf2);
										if(hora<10&&min<10&&sec<10){
											printf("\n                           Horario: %d%d:%d%d:%d%d    ", extra, hora, extra, min, extra, sec);			
										}else if(hora<10&&min>=10&&sec<10){
											printf("\n                           Horario: %d%d:%d:%d%d     ", extra, hora, min, extra, sec);			
										}else if(hora<10&&min<10&&sec>=10){
											printf("\n                           Horario: %d%d:%d%d:%d     ", extra, hora, extra, min, sec);			
										}else if(hora<10&&min>=10&&sec>=10){
											printf("\n                           Horario: %d%d:%d:%d       ", extra, hora, min, sec);	
										}else if(hora>=10&&min<10&&sec<10){
											printf("\n                           Horario: %d:%d%d:%d%d     ", hora, extra, min, extra, sec);			
										}else if(hora>=10&&min>=10&&sec<10){
											printf("\n                           Horario: %d:%d:%d%d       ", hora, min, extra, sec);	
										}else if(hora>=10&&min<10&&sec<10){
											printf("\n                           Horario: %d:%d%d:%d       ", hora, extra, min, sec);	
										}else if(hora>=10&&min>=10&&sec>=10){
											
												printf("\n                    Horario: %d:%d:%d         ", hora, min, sec);	
										}	
										printf("\n                             Estilo da Transação: PIX");
										printf("\n  Nome de quem pagará: %s", nome_do_participante);
										printf("                                               Saldo Inicial de Hoje: %d R$                       ", randomico_base_dindin);
										printf("\n                                                                              ");
										printf("\n  Nome de quem receberá: %s", resu_rand_nome);
										printf("\n                                             Saldo Final: %d R$                      ", sobra_dindin);
										printf("\n                                                                              ");
										printf("\n  Quando esse dinheiro cairá na conta: em 3 horas no maximo                   ");
										printf("\n                                                                              ");
										printf("\n------------------------------------------------------------------------------");



										
										
									
									
								}		
		}
	

						
							



	/*
					
					
					
					
					
					
		
			system("cls");
			printf("\n______________________________________________________________________________");	
			printf("\n||                                                                          ||");
			printf("\n||                                                                          ||");
			printf("\n||              Obrigado por escolher nosso banco de qualidade              ||");
			printf("\n||                                                                          ||");
			printf("\n||           Em seguida Por Gentileza digite o seu número do cartão         ||");
			printf("\n||                   Esse número deve conter 16 caracteres                  ||");
			printf("\n||                    Divididos entre espaços entre eles                    ||");
			printf("\n||                 Exemplo: 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8                 ||\n\t\t        ");		
			scanf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d", &nu_cartao01, &nu_cartao02, &nu_cartao03, &nu_cartao04, &nu_cartao05, &nu_cartao06, &nu_cartao07, &nu_cartao08, &nu_cartao09, &nu_cartao10, &nu_cartao11, &nu_cartao12, &nu_cartao13, &nu_cartao14, &nu_cartao15, &nu_cartao16);
			printf("\n||                                                                          ||");
			printf("\n||                      Seu cartão possui esses Números:                    ||");
			printf("\n||                            %d%c%c%c %c%c%d%c %c%c%c%c %c%d%d%d                           ||", nu_cartao01, 35, 35, 35, 35, 35, nu_cartao07, 35, 35, 35, 35, 35, 35, nu_cartao14, nu_cartao15, nu_cartao16);
			printf("\n||                                                                          ||");
			printf("\n||                              Se Sim De Enter                             ||");
			printf("\n||                                                                          ||");
			printf("\n||                               Se Não De Tab                              ||");
			printf("\n||                                                                          ||");
			printf("\n||                                                                          ||");
			printf("\n||                                                                          ||");
			printf("\n||                                                                          ||");
			printf("\n||                                                                          ||");
			printf("\n||                                                                          ||");
			printf("\n______________________________________________________________________________\n\n");
	}
	
	input2 = getch();
	
	if(input=='\w'){
		
		
		printf("\n______________________________________________________________________________");
		printf("\n||                                                                          ||");
		printf("\n||               E agora Por Favor digite o Seu PIN do cartão               ||");
		printf("\n||                   Lembrando que um PIN possui 4 digitos                  ||");
		printf("\n||                                                                          ||");
		scanf("\n                                      %d", &pin);
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n||                                                                          ||");
		printf("\n______________________________________________________________________________");
	}else if(input=='\t'){
		abort();
	}
*/







	
	return 0;	
	}
	}
}
}
}
