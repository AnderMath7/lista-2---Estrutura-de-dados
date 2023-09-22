#include <stdio.h>\
#include <stdlib.h>
#include <locale.h>
#define TAM 10

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
	int count;
	printf("QUICKSORT\n\n");
	int valores[TAM]={6, 12, 13, 7, 1, 20, 5, 16, 11, 2};
	
	printf("Os valores em ordem original são: \n");
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);	
	}
	
	printf("\n\nOs números organizados em ordem crescente ficam: \n");
	quickSort(valores, 0, TAM-1);
	
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);
	}
	
	
	getch();
	return 0;
}
