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

	printf("Digite sua nota minima para a aprova��o: ");
	scanf("%d", &m_a);
		
	printf("Digite sua nota minima para ser reprovado: ");
	scanf("%d", &m_r);
	
	ns = (n1+n2+n3+n4)/4;
	
	if(n1<=100||n2<=100||n3<=100||n3<=100||n4<=100){
		if(ns<m_a){
			if(ns<m_a&&ns>m_r){
			printf("\n\nVoc� tirou %d, que � abaixo da m�dia, ou sej� ter� que fazer a recupera��o", ns);
			}else if(ns<m_r){
			printf("\n\nVoc� tirou %d, que � abaixo da m�dia, mas tambem � abixo do minimo ou seja voc� foi reprovado", ns);
			}
		}else if(ns>m_a){
			printf("Voc� tirou %d ou seja, Voc� passou de ano sem a nessecidade de fazer a recupera��o", ns);
		}else if(n1>100||n2>100||n3>100||n3>100||n4>100){
			printf("Suas notas s�o invalidas");
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
				
				printf("Digite sua nota minima para a aprova��o: ");
				scanf("%d", &m_a);
					
				printf("Digite sua nota minima para ser reprovado: ");
				scanf("%d", &m_r);
				
				ns = (n1+n2+n3+n4)/4;
						
				if(n1<=100||n2<=100||n3<=100||n3<=100||n4<=100){
					if(ns<m_a){
						if(ns<m_a&&ns>m_r){
							printf("\n\nVoc� tirou %d, que � abaixo da m�dia, ou sej� ter� que fazer a recupera��o", ns);
						}else if(ns<m_r){
							printf("\n\nVoc� tirou %d, que � abaixo da m�dia, mas tambem � abixo do minimo ou seja voc� foi reprovado", ns);
						}
						}else if(ns>m_a){
							printf("Voc� tirou %d ou seja, Voc� passou de ano sem a nessecidade de fazer a recupera��o", ns);
						}
					
					}
					printf("Voc� deseja recome�a: ");
					scanf("%s", &perg);
		}
	
	}
	printf("Voc� deseja recome�a: ");
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
	
		printf("Digite sua nota minima para a aprova��o: ");
		scanf("%d", &m_a);
		
		printf("Digite sua nota minima para ser reprovado: ");
	scanf("%d", &m_r);
	
		ns = (n1+n2+n3+n4)/4;
			
		if(n1<=100||n2<=100||n3<=100||n3<=100||n4<=100){
			if(ns<m_a){
				if(ns<m_a&&ns>m_r){
			printf("\n\nVoc� tirou %d, que � abaixo da m�dia, ou sej� ter� que fazer a recupera��o", ns);
				}else if(ns<m_r){
				printf("\n\nVoc� tirou %d, que � abaixo da m�dia, mas tambem � abixo do minimo ou seja voc� foi reprovado", ns);
				}
			}else if(ns>m_a){
			printf("Voc� tirou %d ou seja, Voc� passou de ano sem a nessecidade de fazer a recupera��o", ns);
			}
		
		}
		printf("Voc� deseja recome�a: ");
		scanf("%s", &perg);

	
	}
		
	return 0;
	}
}


