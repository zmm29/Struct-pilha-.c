#include <stdio.h>
#include "libPilha.h"

int main(){
	int dec, base;
	tpilha p;
	inicializa(&p);
	printf("Valor em decimal e a base (2-8): ");
	scanf ("%d%d", &dec, &base);
	while(dec>0){
		push(&p,dec%base);
		dec = dec /base;
	}//fim while
	printf("Conversao: ");
	mostraPilha(p);
	return 0;
	
}
