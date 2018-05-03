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
printf("\n\n Digite o identificador [0 para sair]:");
scanf("%d",&identificador);
while(identificador!=0){
	printf("\n Digite o nome do cliente:");
	scanf("%s", nome);
	
	fprintf(arquivo, "%d %s\n", identificador, nome);
	
	printf("\n\n Digite o identificador [0 para sair]:");
	scanf("%d", &identificador);
}
fclose(arquivo);
return 0;
}
