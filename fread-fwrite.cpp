#include <stdio.h>

int main(){
	#define SIZE 5
	int A[SIZE] = {10,20,30,40,50};
	FILE *fp = fopen("teste.dat","wb");
	fwrite(A,sizeof(int),SIZE,fp);
	fclose(fp);
	int B[SIZE];
	fp = fopen("teste.dat","rb");
	if((fseek(fp,sizeof(int),SEEK_SET)) == 0){
	  int retorno = fread(B,sizeof(int),1,fp);
	  printf("%d %d\n", B[0], retorno);
	}
	fclose(fp);
}
