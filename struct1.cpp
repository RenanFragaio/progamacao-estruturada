#include <stdio.h>

typedef struct a{
	char nome[80];
	int idade;
	char telefone[9];
};

int main(){
	a aluno[2];
	int i; 
	for(i=0;i<2;i++){
	printf("Digite seu nome");
	fflush(stdin); 
	fgets(aluno[i].nome,80,stdin);
	printf("Digite sua idade");
	scanf("%d",&aluno[i].idade);
	printf("Digite seu telefone");
    fflush(stdin);
	fgets(aluno[i].telefone,9,stdin);
	}
	for(i=0;i<2;i++){
	printf("Nome: %s",aluno[i].nome);
	printf("Idade: %d\n",aluno[i].idade);
	printf("Telefone: %s\n",aluno[i].telefone);
	}
}
