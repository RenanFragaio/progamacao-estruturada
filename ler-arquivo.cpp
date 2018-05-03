#include <stdio.h>

int main(){
FILE *arquivo;
char nome[30];
int identificador;
arquivo = fopen ("cliente.txt","r");
if(arquivo == NULL){
	printf("\n Erro ao abrir arquivo cliente.txt");
	return 1;
}
while(fscanf(arquivo, "%d %s\n", &identificador,nome) != EOF){
	printf("%d %s\n",identificador,nome);
}
fclose(arquivo);
return 0;
}
