#include <stdio.h>
#define DIM 10

typedef struct struttura {
    int info[DIM];
    int free;
    int head;
    int prev[DIM];
    int next[DIM];
} struttura;

typedef struttura* List;

List* inizializzazione(){
    List lista = (List*) malloc(sizeof(List));
    
    int i = 0;
    for(i = 0; i < DIM; i++){
        lista->next[i] = i+1;
        lista->prev[i] = i-1;
    }
    
    lista->free = 0;
    lista->head = -1;
    lista->next[DIM-1] = -1;
    
    return lista;
}

void valoriInizializzati(List *l){
    for(int i = 0; i < DIM; i++){
        l.info[l->free] = i;
        l->free += 1;
        l->next[i] = i+1;
        l->prev[i] = i-1;
    }
    
    lista->head = 0;
    lista->next[DIM-1] = -1;
}
void stampa(List *l){
    
    int i = 0;
    
    for(i = 0; l.next[i] != -1; i++){
        printf("%d\n", l.info[i]);
    }
}
int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
