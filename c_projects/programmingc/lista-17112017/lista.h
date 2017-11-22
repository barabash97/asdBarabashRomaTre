#include <stdlib.h>
#include <stdio.h>
#define DIM 10
typedef struct elist {
    int info;
    struct elist* next;
} elist;

typedef struct elist Lista;

Lista *allocamentoMemoria();
Lista *inizializzazione();
void stampaLista(Lista* p);
Lista *inversa(Lista* p);
void inversaDoppioPuntatore(Lista **p);
