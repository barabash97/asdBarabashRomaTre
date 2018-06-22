#include <stdio.h>
#include <stdlib.h>

typedef struct albero_nodo{
    int info;
    struct albero_nodo* parent;
    struct albero_nodo* sx;
    struct albero_nodo* dx;
};

typedef struct albero_nodo Albero;

Albero* auto_complete(){
    int i = 0;
    Albero *root = NULL;

    for(i = 1; i <= 7; i++){
        insert(i, &(root));
    }

    return root;
}

insert(int key, Albero **leaf)
{
    if( *leaf == 0 )
    {
        *leaf = (Albero*) malloc( sizeof(Albero ) );
        (*leaf)->info = key;
        /* initialize the children to null */
        (*leaf)->sx = 0;
        (*leaf)->dx = 0;
    }
    else if(key < (*leaf)->info)
    {
        insert( key, &(*leaf)->sx );
    }
    else if(key > (*leaf)->dx)
    {
        insert( key, &(*leaf)->dx);
    }
}


int main() {
    Albero* root = NULL;
    return 0;
}