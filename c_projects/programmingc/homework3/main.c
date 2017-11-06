#include <stdio.h> /* ora puoi usare NULL */

/* scrivi qui la definizione del tipo "elist" (elemento della lista)
   con i campi "info" (intero) e "next" (prossimo elemento) */

typedef struct lista {
	int info;
	struct lista* next;
}  lista;

typedef lista* plist;

/* scrivi qui la definizione del tipo "plist" che e' un
   riferimento ad un oggetto di tipo "elist" */


int valore_massimo_lista(plist p)
{

    /* scrivi qui il codice che calcola il valore massimo contenuto
       in una lista semplicemente concatenata di interi passata in
       input e lo ritorna come output.
       Se la lista non ha nessun elemento ritorna zero. */
       int max;
       
       if(p == NULL){
           return 0;
       } else {
           max = p->info;
           
           while(p != NULL){
                if(max < p->info) {
                    max = p->info;
                }
                
                p = p->next;
           }
       }
       
       return max;
}

plist *randomList(){
    
    int i;
    plist nodo =(plist*) malloc(sizeof(plist));
    plist head =nodo;
    for(i = 1; i < 11; i++){
        nodo->info = i;
        nodo->next = (plist*) malloc(sizeof(plist));
        nodo = nodo->next;
    }
    
    nodo->next = NULL;
    return head;
}

void stampaLista(plist p){
    while(p != NULL){
        printf("\n%d", p->info);
        p = p->next;
    }
}

int main(int argc, char** argv)
{
    plist *nodo = randomList();
    stampaLista(nodo);
    return 0;
}
