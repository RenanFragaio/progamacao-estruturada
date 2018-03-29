#include <stdio.h>
#define max 4

int main(){
	int i,j;
	int matriz1[max][max];
	
	for(i=0;i<max;i++)   
		for(j=0;j<max;j++){
			printf("MATRIZ 1 --Digite o valor da posição [%d][%d]",i,j);
			scanf("%d",&matriz1[i][j]);
		}	
	printf("Matrix:\n");
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			printf("\t |%d ",matriz1[i][j]); 
			
		}	
		printf("\n----------------------------------------\n");
	}
	printf("Triângulo Superior:\n");
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			if(i<j)
			printf("\t |%d ",matriz1[i][j]); 
			
		}	
		printf("\n----------------------------------------\n");
	}
}
