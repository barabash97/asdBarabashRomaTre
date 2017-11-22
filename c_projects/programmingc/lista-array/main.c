#include <stdio.h>
#include <stdlib.h>
#include "lista-array.h"

void main() {

    int i;
    lista* l = NEW_LIST();

    for(i=1; i<20; i++) {
        INSERT(l,i);
    }


    printf("Cancello l'elemento 10\n");
    DELETE(l,10);
    printf("Inserisco l'elemento 20\n");
    INSERT(l,20);

    i = l->head;
    while( i != -1 ) {
        printf("elemento %d in posizione %d\n", l->info[i], i);
        i = l->next[i];
    }
}