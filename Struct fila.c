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
//------------------------------------------- 
int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Top (Olhar Topo)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------
int main(){
	tpilha p1;
	tdado x;
	int op; 
	inicializa (&p1);
	do{
		printf("Topo: %d \n ", p1.topo);
		mostraPilha(p1);
		op = menu();		
		switch (op){
			case 1: printf("Dado para inserir: ");
					scanf("%d", &x);
					if(push(&p1, x) ==1)
					printf("Dado inserido :)\n");
					else				
					printf("Stack overflow :(\n)");
			break;
			case 2: if(isEmpty(p1) ==1)
					printf("Dado inexistente :)\n");
					else				
					printf("Dado removido %d :(\n", pop(&p1));
			break;
			case 3: printf("Dados da pilha: ", p1.topo);
					mostraPilha(p1);
					
			break;
			case 0: printf("Saindo .... ;(\n");
			
			break;
			
		}
		getch();
		system("cls");
		}while(op!=0);
}
