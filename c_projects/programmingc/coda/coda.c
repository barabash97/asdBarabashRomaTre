#include <stdio.h>
#include <stdlib.h>


/**
 * @brief NuovA coda
 * @return 
 */
Coda* NEW_CODA(){
    Coda* c = (Coda*) malloc(sizeof(Coda));
    c->head = 0; //Coda vuota
    c->tail = 0; 
    c->A = (int*) calloc(4, sizeof(int));
    c->A_length = 4;
    return c;
}

/**
 * @brief Controllo se la coda è vuota
 * @param s
 * @return 
 */
int IS_EMPTY(Coda* c){
    return c->head == c->tail;
}

/**
 * @brief Inserimento
 * @param s
 * @param x
 */
void ENQUEUE(Coda* c, int x){
    int i;
    
    if((c->head == c->tail+1) || ( (c->tail == c->A_length-1) && (c->head == 0) ) ){ //Array pieno
        int* B = (int*) calloc(c->A_length, sizeof(int));
        for(i = 0; i < c->A_length; i++){
            B[i] = A[i];
        }
        c->A_length = 2 * c->A_length;
        //c->A = (int *) realloc(c->A, c->A_length*sizeof(int));
        printf("\nHo riallocato %d caselle\n",2 * s->A_length);
        for(i = 0; i < (c.A_length); i++){
            c->A[i] = B[(i + c->head)%c->A_length]
        }
    c->A_length = 2* c->A_length;
    free(B);
    c->head = 0;
    c->tail = (c->A_length / 2) - 1;
    
    }
    
    c->tail = c->top + 1;
    c->A[c->top] = x;
}

int POP(Coda* s){
    
    if(IS_EMPTY(s)){
        printf("\nErrore: POP su stack vuoto.\n");
        exit(1);
    }
    
    s->top = s->top-1;
    return s->A[s->top + 1];
}

