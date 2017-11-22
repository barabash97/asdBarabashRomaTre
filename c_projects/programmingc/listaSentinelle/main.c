#include <stdio.h>
#include <stdlib.h>

typedef struct enodo {
    int info;
    struct enodo *next;
    struct enodo *prev;
} enodo;

typedef struct elist {
    struct enodo* nodo;
}elist;

typedef struct enodo Nodo;
typedef struct elist Lista;

Lista *inizializzazione(){
    Lista *head = (Lista*) malloc(sizeof(Lista));
    Nodo* headNodo = (Nodo*) malloc(sizeof(Nodo));
    head->
}
int main() {
    printf("Hello, World!\n");
    return 0;
}