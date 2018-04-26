#include <stdio.h>

main(){
	int n=12;
	int *p;
	p = &n;
	printf("Valor na memória: %d\n", *p);
	*p = n - 7;
	printf("Valor de n:%d\n", n);
	n = 4;
	printf("Valor de *p:%d\n", *p);
}
