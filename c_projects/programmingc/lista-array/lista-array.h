#ifndef LISTA_ARRAY_H
#define LISTA_ARRAY_H

typedef struct {

    int head;
    int free;
    int* next;
    int* info;
    int* prev;
    int size;

} lista;

lista* NEW_LIST();
void INSERT(lista* l, int u);
void DELETE(lista* l, int u);
int ALLOCATE_COLUMN(lista* l);
void FREE_COLUMN(lista* l, int i);

#endif