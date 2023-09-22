#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define COL 5
#define LIN 5

int particiona(int *vetor, int inicio, int fim){
	int esquerda, direita, aux, pivo;
	esquerda=inicio; direita=fim;
	pivo=vetor[inicio];
	
	while(esquerda<direita){
		while(vetor[esquerda]<=pivo){
			esquerda++;
		}
		while(vetor[direita]>pivo){
			direita--;
		}
		if(esquerda<direita){
			aux=vetor[esquerda];
			vetor[esquerda]=vetor[direita];
			vetor[direita]=aux;
		}
	}
	vetor[inicio]=vetor[direita];
	vetor[direita]=pivo;
	
	return direita;
}

void quickSort(int *vetor, int inicio, int fim){
	int pivo;
	
	if(fim>inicio){
		pivo=particiona(vetor, inicio, fim);
		quickSort(vetor, inicio, pivo-1);
		quickSort(vetor,pivo+1,fim);
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");

	int matriz[LIN][COL] = {6, 12, 13, 7, 1, 20, 5, 16, 11, 2, 15, 4, 17, 9, 19, 21, 28, 31, 25, 32, 10, 35, 37, 22, 29};
 	int countL, countC;
	int tamanho = LIN * COL;
    int vetorAux[tamanho];
    int k = 0;
	
	
	
	printf("Os valores em ordem original são: \n");
	for(countL=0;countL<LIN;countL++){
		for(countC=0;countC<COL;countC++){
			vetorAux[k++] = matriz[countL][countC];
			printf("%4d",matriz[countL][countC]);
		}
		printf("\n");
	}
	
	
	printf("\n\nOs números organizados em ordem crescente ficam: \n");
	
	quickSort(vetorAux, 0, tamanho-1);
	
	
	k=0;
	for(countL=0;countL<LIN;countL++){
		for(countC=0;countC<COL;countC++){
			matriz[countL][countC] = vetorAux[k++];
			printf("%4d",matriz[countL][countC]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
