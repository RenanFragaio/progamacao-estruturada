#include <stdio.h>

//Todos os n�meros Primos de 1 at� 1000
void Primo(){
	int i;
	for(i=1;i<=1000;i++){
		if((i%2==0)||(i%3==0)||(i%5==0)||(i%7==0)){
			printf("%d N�o � Primo \n",i);
		}
		else{
			printf("%d � Primo \n",i);
		}
	}
}

int main(){
	Primo();
}
