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

int main(int argc, char** argv)
{
    printf("hello world\n");
    return 0;
}
