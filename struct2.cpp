#include <stdio.h>

struct a{
	char nome[80];
	int idade;
};

int main(){
	a aluno; 
	printf("Digite seu nome");
	fgets(aluno.nome,30,stdin);
	printf("Digite sua idade");
	scanf("%d",&aluno.idade);
	printf("Nome: %s\n",aluno.nome);
	printf("Idade: %d\n",aluno.idade);
}
