#include <stdio.h>

int main(){
	FILE *pfile;
	pfile = fopen ("frase.txt","r+");
	fputs ("Este animal se chama pato",pfile);
	fseek(pfile,23,SEEK_SET);
	fputs("pagaio",pfile);
	fclose(pfile);
	return 0;
}
