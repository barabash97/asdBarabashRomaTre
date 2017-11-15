#include <stdio.h> /* ora puoi usare NULL */

/* scrivi qui la definizione del tipo "elist" (elemento della lista) con i campi "info" (intero) e "next" (prossimo
 * elemento) */

typedef struct elist
{
    int info;
    struct elist* next;
} elist;

/* scrivi qui la definizione del tipo "plist" che e' un riferimento ad un oggetto di tipo "elist" */

typedef elist* plist;

/* puoi scrivere qui eventuali funzioni di supporto che vuoi utilizzare nella funzione compara_array_lista */

int search_values_in_lista(plist p, int x)
{

    int contatore = 0;

    while(p != NULL) {
        if(x == p->info) {
            contatore++;
        }

        p = p->next;
    }
    
    return (contatore > 0) ? 1 : 0;
}

int compara_array_lista(int A[], int n, plist p)
{

    /* Scrivi qui il codice che conta quanti elementi dell'array A lungo n siano
       presenti anche nella lista semplicemente concatenata p di interi.
       L'array A ha tutti elementi distinti, mentre la lista p potrebbe avere elementi
       duplicati. Se un elemento di A appare duplicato in p, deve essere contato una sola volta.
       Se la lista e' vuota oppure n e' zero allora ritorna zero.  */

    int contatore = 0;
    int i;

    if(p == NULL) {
        return 0;
    }

    for(i = 0; i < n; i++) {
        contatore += search_values_in_lista(p, A[i]);
    }
    
    return contatore;
}

int main(int argc, char** argv)
{
    printf("hello world\n");
    return 0;
}
