#include <stdio.h>

int main(){
	int n = 10;
	int vetor[n];
	int op = 1;
	
	do{
	
	for(i=0;i<n;i++){
		printf("Digite um valor");
		scanf("%d",&vetor[i]);
	}
	printf("Deseja a�terar a quantidade de posi��es do vetor?");
	printf("[1] - Sim");
	printf("[2] - N�o");
	scanf("%d",&op);
	if(op==1){
	 	printf("Deseja alterar para qual valor?");
	 	scanf("%d",&n);
	}
	
	}while(op==1);
}
