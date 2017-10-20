#include <stdio.h>
/**
ale baragona
 * */
typedef struct {
    int top; //indice dell'elemento affiorante
    int* A; //array dinamico degli elementi
    int A_length; // Lunghezza di A: E' una tecnica
} Stack;


/**
 * @brief 
 * @return 
 */
Stack* new_stack(){
    Stack* s = (Stack*) malloc(sizeof(Stack));
    s->top = -1;
    s->A = (int*) calloc(16, sizeof(int));
    s->A_length = 16;
    return s;
}

int IS_EMPTY(Stack* s){
    return s->top == -1;
}

int main(int argc, char **argv)
{
    Stack *s = new_stack();
    
    if(IS_EMPTY(s)){
        printf("Empty");
    } 
    return 0;
}
