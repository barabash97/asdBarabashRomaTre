#include <stdio.h>
#include <stdlib.h>

#define DIM 4

typedef struct elist {
    int info;
    struct elist* next;
    struct elist* head;
}elist;

typedef elist Lista;

Lista *inizializzazioneDati(){
    int i = 1;
    Lista *nodo = (Lista*) malloc(sizeof(Lista));
    Lista *head = nodo;
    
    nodo->info = i;
    
    for(i = i + 1; i <= DIM; i++){
        nodo->next = (Lista *) malloc(sizeof(Lista));
        nodo = nodo->next;
        nodo->info = i;
    }
    
    nodo->next = NULL;
    
    return head;
}


void stampaLista(Lista *p){
    Lista *nodo = p;
    
    printf("Ecco la lista:\n");
    if(nodo == NULL){
        printf("Lista e\' vuota!\n");
    } else {
        while(nodo != NULL){
            printf("%d\n", nodo->info);
            
            nodo = nodo->next;
        }
    }
    
    printf("Fine della lista.\n");
    
}

Lista *unioneDueListe(Lista *p1, Lista *p2){
    Lista *head = p1;
    Lista *nodo = p1;
    
    while(nodo->next != NULL){
        nodo = nodo->next;
    }
    nodo->next = p2;
    
    return head;
}

Lista *inversa(Lista *p){
    Lista *prev = NULL;
    Lista *current = p;
    Lista *next;
    
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    p = prev;
    
    return p;
}

int main(int argc, char **argv)
{
	Lista *lista1 = inizializzazioneDati();
	Lista *lista2 = inizializzazioneDati();
    Lista *listaUnita = unioneDueListe(lista1, lista2);
    Lista *listaInversa = inversa(listaUnita);
    stampaLista(listaInversa);
	return 0;
}
