#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void merge(int *vetor, int inicio, int meio, int fim){
	int *vetorAux, elemento1, elemento2, tamanho, count, indice, indiceAux;
	int fim1=0, fim2=0;
	tamanho=fim-inicio+1;
	elemento1=inicio;
	elemento2=meio+1;
	vetorAux = (int*) malloc(tamanho*sizeof(int));
	
	if(vetorAux!=NULL){
		for(count=0;count<tamanho;count++){
			if(!fim1 && !fim2){
				if(vetor[elemento1]<vetor[elemento2]){
					vetorAux[count]=vetor[elemento1++];
				}else{
					vetorAux[count]=vetor[elemento2++];
				}
				
				if(elemento1>meio){
					fim1=1;
				}
				if(elemento2>fim){
					fim2=1;
				}
			}else{
				if(!fim1){
					vetorAux[count]=vetor[elemento1++];
				}else{
					vetorAux[count]=vetor[elemento2++];
				}
			}
		}
		for(indiceAux=0, indice=inicio; indiceAux<tamanho; indiceAux++, indice++){
			vetor[indice]=vetorAux[indiceAux];
		}
	}
	free(vetorAux);
}

void mergeSort(int *vetor, int inicio, int fim){
	int meio;
	if(inicio<fim){
		meio = floor((inicio+fim)/2);
		mergeSort(vetor,inicio, meio);
		mergeSort(vetor,meio+1,fim);
		merge(vetor,inicio, meio,fim);
	}
}


int main(){
	setlocale(LC_ALL, "portuguese");
	int count, valores[TAM];
	printf("MERGESORT\n\n");
	 valores[0]=6; valores[1]=12; valores[2]=13; valores[3]=7; valores[4]=1; valores[5]=20; valores[6]=5; valores[7]=16; valores[8]=11; valores[9]=2; 
	
	printf("Os valores em ordem original são: \n");
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);	
	}
	
	printf("\n\nOs números organizados em ordem crescente ficam: \n");
	mergeSort(valores, 0, TAM-1);
	
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);
	}
	
	
	getch();
	return 0;
}
