#include "lista.h"

int main() {
    Lista *head = inizializzazione();
    Lista *listaInversa = head;
    inversaDoppioPuntatore(listaInversa);
    stampaLista(listaInversa);
    return 0;
}