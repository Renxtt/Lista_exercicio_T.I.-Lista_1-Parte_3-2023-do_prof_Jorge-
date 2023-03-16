#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	char nm[40], perg[40];
	int n1, n2, n3, n4, ns, m, m_a, m_r;
	
	printf("Digite seu Nome: ");
	fgets(nm,40,stdin);
	
	printf("Digite sua primeira nota: ");
	scanf("%d", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%d", &n2);

	printf("Digite sua terceira nota: ");
	scanf("%d", &n3);

	printf("Digite sua quarta nota: ");
	scanf("%d", &n4);

	printf("Digite sua nota minima para a aprovação: ");
	scanf("%d", &m_a);
		
	printf("Digite sua nota minima para ser reprovado: ");
	scanf("%d", &m_r);
	
	ns = (n1+n2+n3+n4)/4;
	
	if(n1<=100||n2<=100||n3<=100||n3<=100||n4<=100){
		if(ns<m_a){
			if(ns<m_a&&ns>m_r){
			printf("\n\nVocê tirou %d, que é abaixo da média, ou sejá terá que fazer a recuperação", ns);
			}else if(ns<m_r){
			printf("\n\nVocê tirou %d, que é abaixo da média, mas tambem é abixo do minimo ou seja você foi reprovado", ns);
			}
		}else if(ns>m_a){
			printf("Você tirou %d ou seja, Você passou de ano sem a nessecidade de fazer a recuperação", ns);
		}else if(n1>100||n2>100||n3>100||n3>100||n4>100){
			printf("Suas notas são invalidas");
			while(strcmp(perg, "s")==0||strcmp(perg, "S")==0||strcmp(perg, "Sim")==0||strcmp(perg, "sim")==0){
				printf("Digite seu Nome: ");
				fgets(nm,40,stdin);
						
				printf("Digite sua primeira nota: ");
				scanf("%d", &n1);
						
				printf("Digite sua segunda nota: ");
				scanf("%d", &n2);
				
				printf("Digite sua terceira nota: ");
				scanf("%d", &n3);
				
				printf("Digite sua quarta nota: ");
				scanf("%d", &n4);
				
				printf("Digite sua nota minima para a aprovação: ");
				scanf("%d", &m_a);
					
				printf("Digite sua nota minima para ser reprovado: ");
				scanf("%d", &m_r);
				
				ns = (n1+n2+n3+n4)/4;
						
				if(n1<=100||n2<=100||n3<=100||n3<=100||n4<=100){
					if(ns<m_a){
						if(ns<m_a&&ns>m_r){
							printf("\n\nVocê tirou %d, que é abaixo da média, ou sejá terá que fazer a recuperação", ns);
						}else if(ns<m_r){
							printf("\n\nVocê tirou %d, que é abaixo da média, mas tambem é abixo do minimo ou seja você foi reprovado", ns);
						}
						}else if(ns>m_a){
							printf("Você tirou %d ou seja, Você passou de ano sem a nessecidade de fazer a recuperação", ns);
						}
					
					}
					printf("Você deseja recomeça: ");
					scanf("%s", &perg);
		}
	
	}
	printf("Você deseja recomeça: ");
	scanf("%s", &perg);
	while(strcmp(perg, "s")==0||strcmp(perg, "S")==0||strcmp(perg, "Sim")==0||strcmp(perg, "sim")==0){
		printf("Digite seu Nome: ");
		fgets(nm,40,stdin);
			
		printf("Digite sua primeira nota: ");
		scanf("%d", &n1);
			
		printf("Digite sua segunda nota: ");
		scanf("%d", &n2);
	
		printf("Digite sua terceira nota: ");
		scanf("%d", &n3);
	
	printf("Digite sua quarta nota: ");
		scanf("%d", &n4);
	
		printf("Digite sua nota minima para a aprovação: ");
		scanf("%d", &m_a);
		
		printf("Digite sua nota minima para ser reprovado: ");
	scanf("%d", &m_r);
	
		ns = (n1+n2+n3+n4)/4;
			
		if(n1<=100||n2<=100||n3<=100||n3<=100||n4<=100){
			if(ns<m_a){
				if(ns<m_a&&ns>m_r){
			printf("\n\nVocê tirou %d, que é abaixo da média, ou sejá terá que fazer a recuperação", ns);
				}else if(ns<m_r){
				printf("\n\nVocê tirou %d, que é abaixo da média, mas tambem é abixo do minimo ou seja você foi reprovado", ns);
				}
			}else if(ns>m_a){
			printf("Você tirou %d ou seja, Você passou de ano sem a nessecidade de fazer a recuperação", ns);
			}
		
		}
		printf("Você deseja recomeça: ");
		scanf("%s", &perg);

	
	}
		
	return 0;
	}
}


