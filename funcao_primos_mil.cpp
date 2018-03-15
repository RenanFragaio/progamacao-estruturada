#include <stdio.h>

//Todos os números Primos de 1 até 1000
void Primo(){
	int i;
	for(i=1;i<=1000;i++){
		if((i%2==0)||(i%3==0)||(i%5==0)||(i%7==0)){
			printf("%d Não é Primo !! \n",i);
		}
		else{
			printf("%d é Primo !! \n",i);
		}
	}
}

int main(){
	Primo();
}
