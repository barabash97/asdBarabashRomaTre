#include <stdio.h>
#include <stdlib.h>

#define DIM 10

typedef struct elist
{
    int info;
    struct elist* next;
} elist;

typedef elist* Lista;

Lista *leggiLista(){
    Lista lista = malloc(sizeof(Lista));
    Lista head = lista;
    int i = 1;
    
    lista->info = i;
    
    for(i = i + 1; i <= DIM; i++){
        lista->next = malloc(sizeof(Lista));
        lista = lista->next;
        lista->info = i;
    }
    
    lista->next = NULL;
    
    return head;
}

void stampaLista(Lista p){
    Lista nodo = p;
    
    printf("\nStampa della lista:\n");
    while(nodo != NULL){
        printf("%d\n", nodo->info);
        nodo = nodo->next;
    }
    printf("\nFine stampa della lista.\n");
}

int massimo(Lista p){
    
    int max = 0;
    Lista nodo = p;
    
    if(nodo == NULL){
        return max;
    } else {
        max = nodo->info;
        nodo = nodo->next;
        while(nodo != NULL){
            if(max < nodo->info){
                max = nodo->info;
            }
            
            nodo = nodo->next;
        }
    }
    
    return max;
}


int minimo(Lista p){
    Lista nodo = p;
    int min = 0;
    
    if(nodo == NULL){
        return min;
    } else {
        min = nodo->info;
        nodo = nodo->next;
        
        while(nodo != NULL){
            if(min > nodo->info){
                min = nodo->info;
            }
            
            nodo = nodo->next;
        }
    }
    
    return min;
}

Lista *inserireNuovoValore(Lista *p){
    Lista nodo = malloc(sizeof(Lista));
    printf("Inserire il valore intero desiderato:\n");
    scanf("%d", &(nodo->info));
    nodo->next = p;
    
    return nodo;
}

int main(int argc, char** argv)
{
    Lista* lista = leggiLista();
    lista = inserireNuovoValore(lista);
    stampaLista(lista);
    printf("Il valore massimo: %d e il valore minimo: %d\n", massimo(lista), minimo(lista));
    return 0;
}
