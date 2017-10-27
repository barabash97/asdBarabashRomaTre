#include <stdio.h>
#include <stdlib.h>
#include "lista-array.h"

int main(int argc, char **argv)
{
	int i;
    Lista *l = newList();
    
    for(i = 1; i < 19; i++){
        printf("Sto inserendo %d nella lista.\n", i);
        inserimento(l, i);
    }
    
    i = l->head;
    
    while(i != -1){
        printf("%d\n", l->info[i]);
        i = l->next[i];
    }
	return 0;
}
