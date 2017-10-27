#ifndef LISTA_ARRAY_H //Define se il file non è stato incluso 
#define LISTA_ARRAY_H

typedef struct {
    int head;
    int free;
    int size;
    int *next;
    int *info;
    int *prev;
} Lista;

Lista *newList();
void inserimento(Lista *l, int u);
void cancellazione(Lista *l, int u);
int allocateColumn(Lista *l);
void free_column(Lista *l, int i);
void stampaErrore(char *string);
#endif