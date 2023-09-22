#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void insertionSort(int *vetor){
	int count, countAux, aux;
	
	for(count=0;count<TAM-1;count++){
		if(vetor[count]<vetor[count+1]){
			aux=vetor[count+1];
			vetor[count+1]=vetor[count];
			vetor[count]=aux;
			countAux=count-1;
			
			while(countAux>=0){
				if(aux>vetor[countAux]){
					vetor[countAux+1]=vetor[countAux];
					vetor[countAux]=aux;
				}else{
					break;
				}
				countAux--;
			}
		}
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int count, valores[TAM];

	valores[0]=6; valores[1]=12; valores[2]=13; valores[3]=7; valores[4]=1; valores[5]=20; valores[6]=5; valores[7]=16; valores[8]=11; valores[9]=2; 
	
	printf("Os valores em ordem original são: \n");
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);	
	}
	
	printf("\n\nOs números organizados em ordem decrescente ficam: \n");
	insertionSort(valores);
	
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);
	}
	
	
	getch();
	return 0;
}
