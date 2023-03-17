#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	unsigned int cp = 1252; 
	unsigned int cpin  = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);       
	SetConsoleOutputCP(cp);
	
	int Numero_de_aulas, Numero_de_aulas_faltadas;
	float Nota1, Nota2, Nota3, Nota4, Media_para_aprovacao, Media_para_aprovacao_da_recu, Media_para_N_aprovacao; 
	float media_nota_all;
	char Nome_do_aluno[40];
	
	printf("\nQual � o nome do Aluno: ");
	fgets(Nome_do_aluno,40,stdin);
	
	
	printf("\n\nEm uma escola que como pontua��o total tem 100 pontos\nE possue uma regra que diz que se uma pessoal falta 50%c do tempo de escola ela � automaticamente reprovado\n",  37);
	printf("\n1� Nota do Aluno:");
	scanf("%f", &Nota1);
	printf("\n2� Nota do Aluno:");
	scanf("%f", &Nota2);
	printf("\n3� Nota do Aluno:");
	scanf("%f", &Nota3);
	printf("\n4� Nota do Aluno:");
	scanf("%f", &Nota4);
		
	media_nota_all = (Nota1+Nota2+Nota3+Nota4)/4;	
	
	printf("Qual � a media para aprova��o direta? Acima de (em %c): ", 37);
	scanf("%f", &Media_para_aprovacao);
	printf("Qual � a media para ficar de recupera��o? Abaixo de (em %c): ", 37);
	scanf("%f", &Media_para_aprovacao_da_recu);
	printf("Qual � a Media para acabar por reprovar direto? abaixo de (em %c):", 37);
	scanf("%f", &Media_para_N_aprovacao);
	
	printf("Quantidade de Aulas dadas: ");
	scanf("%d", &Numero_de_aulas);
	
	srand(time(NULL));
	
	Numero_de_aulas_faltadas= rand() % Numero_de_aulas+1;
	
	printf("\nN�mero de Faltas: %d\n\n\n", Numero_de_aulas_faltadas);	
	
	if(media_nota_all>=Media_para_aprovacao){

		printf("\nVo�� Passou de ano com uma media: %.0f pontos", media_nota_all);
	}if(media_nota_all<Media_para_aprovacao_da_recu){
	
		printf("\nVo�� tirou abaixo da media, %.0f pontos faz vo�� ficar de recupera��o", media_nota_all);
	}if(media_nota_all<Media_para_N_aprovacao){
	
		printf("\nVo�� ficou com %.0f, essa nota � abaixo da nota e abaixo da media requirida para n�o reprovar automaticamente", media_nota_all);
	}if(Numero_de_aulas_faltadas>(Numero_de_aulas/2)){
	
		printf("\nVo�� ficou com %d faltas, oque faz automaticamente que voc� reprove de ano ", Numero_de_aulas_faltadas);
	}
	
	return 0;	

}
