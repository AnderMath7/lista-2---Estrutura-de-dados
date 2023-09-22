#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void bubbleSort(int *vetor){
	int count=0, i=0, aux=0;
	
	for(count=0;count<10;count++){
		for(i=0;i<TAM-1;i++){
			if( vetor[i] > vetor[i+1]){
				aux= vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1]=aux;
			}
			
		}
	}
}


int main(){
	setlocale(LC_ALL, "portuguese");
	int count, valores[TAM];
	printf("BUBBLESORT\n\n");
	 valores[0]=6; valores[1]=12; valores[2]=13; valores[3]=7; valores[4]=1; valores[5]=20; valores[6]=5; valores[7]=16; valores[8]=11; valores[9]=2; 
	
	printf("Os valores em ordem original são: \n");
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);	
	}
	
	printf("\n\nOs números organizados em ordem crescente ficam: \n");
	bubbleSort(valores);
	
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);
	}
	
	
	
	getch();
	return 0;
}
