#include <stdio.h>
#define max 3

int main(){
	int i,j;
	//int matriz[max][max];
	//int matriz[max][max] = {{100,2,20},{2,4,7},{80,9,62}}; //definindo a matriz
	//int matriz[max][max] = {{0},{0},{0}}; //zerando a matriz
	int matriz[max][max] = {0}; //zerando a matriz (mais r�pido)
	
	for(i=0;i<max;i++)   //quando h� apenas 1 comnado dentro do for n�o � necessario chaves{}
		for(j=0;j<max;j++){
			printf("Digite o valor da posi��o [%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}	
	printf("\n");
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			//printf("| %d |",2 * matriz[i][j]); //usar \t (tecla Tab) � melhor porque usando apenas espa�o o tamanho do numero quebra a est�tica
			printf("\t |%d|",2 * matriz[i][j]);
			
		}	
		printf("\n-------------------------------------\n");
	}
}
