#include <stdio.h>
#include <stdlib.h>

int main(){
	int p,i,s;
	p=10;
	int *vetor = (int*) malloc(p * sizeof(int)); 
	
	
	
	for(i=0;i<p;i++){
		printf("Digite um valor");
		scanf("%d",&vetor[i]);
	}
	
	printf("\n\n Vetor:");
	for(i=0;i<p;i++){
		printf("%d\n",vetor[i]);
	}
	
	printf("Deseja acrescentar posições do vetor?");
	printf("[1] - Sim");
	printf("[2] - Não");
	scanf("%d",&op);
	if(op==1){
		p_anterior = p;
	 	printf("Digite a quantidade de posições que deseja adicionar.");
	 	scanf("%d",&s);
	 	p += s;
	 	int *vetor = (int*) realloc(vetor, p * sizeof(int));
	}

}
