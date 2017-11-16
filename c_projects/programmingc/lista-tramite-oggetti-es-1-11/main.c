#include <stdio.h>
#include <stdlib.h>

#define DIM 3

typedef struct elist
{
    int info;
    struct elist* next;
} elist;

typedef elist Lista;

Lista* leggiLista()
{
    Lista* lista = malloc(sizeof(Lista));
    Lista* head = lista;
    int i = 1;

    lista->info = i;

    for(i = i + 1; i <= DIM; i++) {
        lista->next = malloc(sizeof(Lista));
        lista = lista->next;
        lista->info = i;
    }

    lista->next = NULL;

    return head;
}

void stampaLista(Lista* p)
{
    Lista* nodo = p;

    printf("\nStampa della lista:\n");

    if(nodo == NULL) {
        printf("Lista e\' vuota.\n");
    }
    while(nodo != NULL) {
        printf("%d\n", nodo->info);
        nodo = nodo->next;
    }
    printf("\nFine stampa della lista.\n");
}

int massimo(Lista* p)
{

    int max = 0;
    Lista* nodo = p;

    if(nodo == NULL) {
        return max;
    } else {
        max = nodo->info;
        nodo = nodo->next;
        while(nodo != NULL) {
            if(max < nodo->info) {
                max = nodo->info;
            }

            nodo = nodo->next;
        }
    }

    return max;
}

int minimo(Lista* p)
{
    Lista* nodo = p;
    int min = 0;

    if(nodo == NULL) {
        return min;
    } else {
        min = nodo->info;
        nodo = nodo->next;

        while(nodo != NULL) {
            if(min > nodo->info) {
                min = nodo->info;
            }

            nodo = nodo->next;
        }
    }

    return min;
}

Lista* add_before(Lista* p)
{
    Lista* nodo = malloc(sizeof(Lista));
    printf("Inserire il valore intero desiderato:\n");
    scanf("%d", &(nodo->info));
    printf("\n\nValore da inserire: %d\n\n", nodo->info);
    if(p != NULL) {
        nodo->next = p;
    } else {
        nodo->next = NULL;
    }

    return nodo;
}

Lista* add_after(Lista* p)
{
    Lista* nuovoNodo = malloc(sizeof(Lista));
    Lista* nodo = p;
    Lista* head = p;
    printf("Inserire un valore intero desiderato in fondo della lista:\n");
    scanf("%d", &(nuovoNodo->info));
    nuovoNodo->next = NULL;
    if(nodo != NULL) {
        while(nodo != NULL) {
            nodo = nodo->next;
        }
        nodo->next = nuovoNodo;
    } else {
        head = nuovoNodo;
    }

    return head;
}

Lista* deleteFist(Lista* p)
{
    if(p == NULL) {
        return NULL;
    }
    Lista* head = NULL;
    if(p->next != NULL) {
        head = p->next;
        free(p);
    }
    return head;
}

Lista* letturaValoriDallaTastiera(Lista* p)
{
    int risposta;
    listaOpzioni();
    scanf("%d", &risposta);
    while(risposta != 0) {
        switch(risposta) {
        case 1:
            p = add_before(p);
            break;
        case 2:
            p = add_after(p);
            break;
        case 3:
            stampaLista(p);
            break;
        case 4:
            p = deleteFist(p);
            break;
            break;
        case 0:
            printf("Ciao!\n");
            break;
        default:
            printf("Operazione sconosciuta.\n");
            break;
        }
        listaOpzioni();
        scanf("%d", &risposta);
    }
    return p;
}

void listaOpzioni()
{
    printf("Opzioni:\n");
    printf("[1] => Inserimento in testa:\n");
    printf("[2] => Inserimento in coda:\n");
    printf("[3] => Stampa della lista:\n");
    printf("[4] => Eliminare elemento in testa:\n");
    printf("[0] => Termine inserimento dati:\n");
}

Lista switchOperazione(int risposta, Lista* p)
{
}

int main(int argc, char** argv)
{
    Lista* lista = leggiLista();
    lista = letturaValoriDallaTastiera(lista);
    printf("Il valore massimo: %d e il valore minimo: %d\n", massimo(lista), minimo(lista));
    return 0;
}
