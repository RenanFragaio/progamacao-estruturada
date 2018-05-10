#include <stdio.h>
#include <stdlib.h>

int main(){
	int tamanho_vetor=10,i,maisposicoes,tamanho_anterior;
	int *vetor = (int*) malloc(tamanho_vetor * sizeof(int));
	FILE *arquivo; //ponteiro de arquivo

	for(i=0;i<tamanho_vetor;i++){
	printf("Digite um valor");
	scanf("%d",&vetor[i]);
	}
	
	do{
	printf("Deseja mais posições?");
	scanf("%d",&maisposicoes);
	tamanho_anterior = tamanho_vetor;
	tamanho_vetor += maisposicoes;
	vetor = (int*) realloc(vetor, tamanho_vetor * sizeof(int));

	for(i=tamanho_anterior;i<tamanho_vetor;i++){
		printf("Digite o valor da nova posição [%d] :",i);
		scanf("%d",&vetor[i]);
	}
	}while(maisposicoes!=0);
	//resultado
	for(i=0;i<tamanho_vetor;i++){
		arquivo = fopen("vetor.txt","a");
		fprintf(arquivo,"v[%d] = %d\n",i,vetor[i]);
		fclose(arquivo);
	}
}
