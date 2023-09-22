#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void crescente(int *vetor){
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

void decrescente(int *vetor){
	int count=0, i=0, aux=0;
	
	for(count=0;count<TAM;count++){
		for(i=0;i<TAM-1;i++){
			if(vetor[i]<vetor[i+1]){
				aux=vetor[i];
				vetor[i]=vetor[i+1];
				vetor[i+1]=aux;
			}
		}
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int count, valores[TAM];
	
	
	
	for(count=0;count<TAM;count++){
		printf("Insira %d valores para serem organizados em ordem crescente: ",TAM-count);
		scanf("%d",&valores[count]);
		system("cls");
	}
	
	printf("Os valores em ordem digitada foram: \n");
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);	
	}
	
	printf("\n\nOs números organizados em ordem crescente ficam: \n");
	crescente(valores);
	
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);
	}
	
	printf("\n\nOs números organizados em ordem decrescente ficam: \n");
	decrescente(valores);
	
	for(count=0;count<TAM;count++){
		printf("%4d",valores[count]);
	}
	
	getch();
	return 0;
}
