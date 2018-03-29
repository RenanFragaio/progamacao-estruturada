#include <stdio.h>
#define max 3

int main(){
	int i,j;
	int matriz1[max][max];
	int matriz2[max][max];
	
	for(i=0;i<max;i++)   
		for(j=0;j<max;j++){
			printf("MATRIZ 1 --Digite o valor da posição [%d][%d]",i,j);
			scanf("%d",&matriz1[i][j]);
		}	
	for(i=0;i<max;i++)   
		for(j=0;j<max;j++){
			printf("MATRIZ 2 -- Digite o valor da posição [%d][%d]",i,j);
			scanf("%d",&matriz2[i][j]);
		}	
	printf("\n");
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			printf("\t |%d ",matriz1[i][j] + matriz2[i][j]); 
			
		}	
		printf("\n----------------------------------------\n");
	}
}
