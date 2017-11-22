#include <stdio.h>  /* ora puoi usare NULL */
#include <stdlib.h>

/* scrivi qui la definizione del tipo nodo_albero che rappresenta una struttura con tre campi:
 * un campo info di tipo intero,
 * un campo sx (il puntatore al sottoalbero sinistro),
 * un campo dx (un puntatore al sottoalbero destro).
ATTENZIONE: NON INVERTIRE L'ORDINE DEI SOTTOALBERI SINISTRO E DESTRO, ALTRIMENTI IL SISTEMA DI TEST NON SARA' IN GRADO DI GESTIRE IL TUO CODICE */

typedef struct nodo_albero {
    int info;
    struct nodo_albero *sx;
    struct nodo_albero *dx;
} nodo_albero;

/* scrivi qui la definizione del tipo albero che rappresenta un puntatore alla struttura nodo_albero */

typedef struct nodo_albero *albero;


/* scrivi qui eventuali funzioni di appoggio */

int altezzaAlbero(albero root)
{
// Livello parte da 0
// Albero vuoto = -1
    if (root == NULL)
        return -1;
    int ls = altezzaAlbero(root->sx);
    int ld = altezzaAlbero(root->dx);
    return ls > ld ? 1 + ls : 1 + ld;
}

unsigned int numeroFoglie(albero node)
{
    if(node == NULL)
        return 0;
    if(node->sx == NULL && node->dx==NULL)
        return 1;
    else
        return numeroFoglie(node->sx)+
                numeroFoglie(node->dx);
}


/* INIZIO FUNZIONE */

int albero_altezza_foglie(albero T) {

    /* Si consideri un albero binario T di interi.
     * La funzione albero_altezza_foglie deve ritornare un booleano:
     * 1 (true) se l'altezza di T è pari al numero di foglie di T,
     * 0 (false) altrimenti.
     * Assumi che in un albero binario vuoto l'altezza sia pari a -1 mentre il numero di foglie sia pari a 0;
     * quindi se T è vuoto allora la funzione albero_altezza_foglie deve ritornare 0.*/
    int n_foglie, altezza;
    if (T == NULL) {
        return 0;
    } else {
        n_foglie = numeroFoglie(T);
        altezza = altezzaAlbero(T);

        if(n_foglie == altezza){
            return 1;
        } else {
            return 0;
        }
    }


}


int main() {
    albero root = (albero) malloc(sizeof(struct nodo_albero));

    printf("Dimensione: %d\n", altezzaAlbero(root));
    return 0;
}