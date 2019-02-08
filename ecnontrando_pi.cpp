#include <stdio.h>
#include <math.h>

int main(){
	const float teste = 3.14159;
	//float pi = 4.0;
	double pi = 4.0;
	int i=1,k=2,x,y;
	//float sinal = -1.0;
	double sinal = -1.0;
	
	while(1){
		pi+= sinal*(4.0/(2.0*i+1.0));
		//printf("Iteração:%d\n ",i);
		//printf("pi = %f\n",pi);
		i++;
		sinal*=-1.0;
		
		//printf("I = %d",i);
		
		x = trunc(pi*pow(10,k));
		//printf("X = %d\n",x);
		y = trunc(teste*pow(10,k));
		//printf("Y = %d\n",y);
		
		if(x==y){
			printf("X = %d - ",x);
			printf("Y = %d - ",y);
			printf("Iterações: %d\n",i);
			k++;
			//break;
		}
		
		if((i>=200000) and (k>5)){
			printf("\nIterações: %d\n",i);
			printf("X = %d\n",x);
			printf("Y = %d\n",y);
			printf("K = %d\n",k);
			break;
		}
	}
}
