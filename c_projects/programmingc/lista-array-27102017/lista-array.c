#include "lista-array.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief 
 * @param l
 * @param i
 */
void free_column(Lista *l, int i){
    l->next[i] = l->free;
    l->prev[i] = -1;
    if(l->free != -1){
        l->prev[l->free] = i;
    }
    
    l->free = i;
}

/**
 * @brief Creazione di una lista vuota
 * @return 
 */
 
Lista *newList(){
    Lista *l = (Lista *) malloc(sizeof(Lista));
    int i;
    l->head = -1;
    l->free = 0;
    l->size = 8;
    l->next = (int *) calloc(l->size, sizeof(int));
    l->info = (int *) calloc(l->size, sizeof(int));
    l->prev = (int *) calloc(l->size, sizeof(int));
    
    for(i = 0; i < l->size; i++){
        l->next[i] = i+1;
        l->prev[i] = i-1;
    }
    l->next[l->size - 1] = -1;
    return l;
}

/**
 * @brief Inserimento dati
 * @param l
 * @param u
 */
void inserimento(Lista *l, int u){
    int col = allocateColumn(l);
    l->info[col] = u;
    l->next[col] = l->head;
    l->prev[col] = -1;
    l->prev[l->head] = col;
    l->head = col;
}

void cancellazione(Lista *l, int u){
    int i = l->head;
    while(i != -1){
        if(l->info[i] == u){
            printf("Elemento da rimuovere:%d\n", l->info[i]);
            //Se c'è un precedente
            if(l->prev[i] != -1){
                l->next[l->prev[i]] = l->next[i]; 
            } else {
                l->head = i;
            }
            
            if(l->next[i] != -1){
                l->prev[l->next[i]] = l->prev[i];
            }
            
            
        }
        i = l->next[i];
    }
}

/**
 * @brief Allocazione della colonna dell'array
 * @param l
 * @return 
 */
int allocateColumn(Lista *l){
     //Non ci sono più colonne libere
    if(l->free == -1){
        int i;
        int size_and_int = l->size * 2 * sizeof(int);
        int size = l->size * 2;
        l->next = (int *) realloc(l->next, size_and_int);
        l->info = (int *) realloc(l->info, size_and_int);
        l->prev = (int *) realloc(l->prev, size_and_int);
        
        for(i = l->size; i < size; i++){
            l->next[i] = i+1;
            l->prev[i] = i-1;
        }
        
        l->next[size-1] = -1;
        l->free = l->size;
        l->size = size;
        printf("\nNuova dimensione: %d\n", size);
    }
    
    int output = l->free;
    //La lista free ha almeno 2 colonne
    if(l->next[l->free] != -1){
        l->prev[l->next[l->free]] = -1;
    }
    l->free = l->next[l->free];
    
    return output;
}

void stampaErrore(char *string){
    printf("%s\n", string);
    exit(1);
}