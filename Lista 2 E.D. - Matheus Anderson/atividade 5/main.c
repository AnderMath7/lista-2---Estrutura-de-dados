#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define COL 5
#define LIN 5

int main(){
	setlocale(LC_ALL, "portuguese");

	int matriz[LIN][COL] = {6, 12, 13, 7, 1, 20, 5, 16, 11, 2, 15, 4, 17, 9, 19, 21, 28, 31, 25, 32, 10, 35, 37, 22, 29};
 	int countL, countC, valor, busca, linhaR, colunaR;
	int tamanho = LIN * COL;
	
	
	
	printf("Os valores disponíveis são: \n");
	for(countL=0;countL<LIN;countL++){
		for(countC=0;countC<COL;countC++){
			printf("%4d",matriz[countL][countC]);
		}
		printf("\n");
	}
	
	
	printf("\n\nInsira o número que deseja pesquisar: ");
	scanf("%d",&busca);
	
	
	

	for(countL=0;countL<LIN;countL++){
		for(countC=0;countC<COL;countC++){
			if(matriz[countL][countC]==busca){
				linhaR=countL+1;
				colunaR=countC+1;
				break;
			}
			
		}
	}
	
	system("cls");
	printf("O valor %d está na linha %d, coluna %d",busca,linhaR,colunaR);
	
	getch();
	return 0;
}
