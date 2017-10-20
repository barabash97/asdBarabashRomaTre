#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top; //indice dell'elemento affiorante
    int* A; //array dinamico degli elementi
    int A_length; // Lunghezza di A: E' una tecnica
} Stack;

Stack* new_stack();

int IS_EMPTY(Stack* s);

void PUSH(Stack* s, int x);
int POP(Stack* s);