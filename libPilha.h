#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef int tdado; 
typedef struct{
	int topo;
	tdado pilha [MAX];
}tpilha;
void inicializa(tpilha *p){
	p->topo = -1;
}
//-------------------------------------------
int push(tpilha *p, tdado x){
	if(p->topo == MAX-1)
	return 0;
	p-> topo++;
	p-> pilha [p->topo]=x;
	return 1;

}
//------------------------------------------- Função pop não pode estar vazia
// Criar uma variavel auxiliar, recebe quem ta no topo, devolve um valor que esta na pila

tdado pop(tpilha *p){
	tdado aux;
	aux = p->pilha[p->topo];
	p->topo--;
	return aux;
	// quando chama a pop ela sempre mostra o dado que ela está removendo

}
tdado top(tpilha *p){
	tdado aux;
	aux = p->pilha[p->topo];
	p->topo;
	return aux;
}
//------------------------------------------- 
int isEmpty(tpilha p){
	if(p.topo == -1)
		return 1;
	else
		return 0;
}
//------------------------------------------- 
void mostraPilha(tpilha p){
	while (p.topo != -1){
		printf ("%d |", p.pilha[p.topo]); //mostra o valor do topo]
		p.topo--; //desce a posição
	}//fim while
	printf("\n");
}
