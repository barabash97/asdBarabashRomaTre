#ifndef _CODA_H
#define _CODA_H

typedef struct {
    int head; //indice testa
    int tail; //indice prossima casella libera
    int* A; //array dinamico degli elementi
    int A_length; // Lunghezza di A: E' una tecnica
} Coda;

Coda* NEW_CODA();

int IS_EMPTY(Coda* c);

void ENQUEUE(Coda* c, int x);
int DEQUEUE(Coda* c);