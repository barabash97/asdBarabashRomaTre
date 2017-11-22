#include "lista.h"

Lista *allocamentoMemoria() {
    return (Lista *) malloc(sizeof(Lista));
}

Lista *inizializzazione() {

    int i = 1;

    Lista *head = allocamentoMemoria();
    Lista *nodo = head;
    nodo->info = i;

    for(i = i + 1; i <= DIM; i++){
        nodo->next = allocamentoMemoria();
        nodo = nodo->next;
        nodo->info = i;
    }

    nodo->next = NULL;

    return head;
}

void stampaLista(Lista* p){

    Lista *nodo = p;

    printf("Stampa della lista.\n");

    if(nodo == NULL){
        printf("Lista e\' vuota.\n");
    } else {
        while(nodo != NULL){
            printf("%d\n", nodo->info);
            nodo = nodo->next;
        }
    }

    printf("FINE Stampa della lista.\n");
}

Lista *inversa(Lista* p){
    Lista *current = p;
    Lista *prev = NULL;
    Lista *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void inversaDoppioPuntatore(Lista** p){
    Lista *current = *p;
    Lista *prev = NULL;
    Lista *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *p = prev;
}