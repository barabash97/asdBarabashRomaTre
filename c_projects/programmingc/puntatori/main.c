#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Const 
 * */
#define DIM 10
#define MAX_VALUE 100

void puntatori();
int random_array(int array[], int dim, int max_num);
void stampaArrayInteri(int *array, int dim);

int main(int argc, char **argv)
{
	int array[DIM];
    random_array(array, DIM, MAX_VALUE);
    stampaArrayInteri(array, DIM);
	return 0;
}

/**
 * @brief Puntatori
 */
void puntatori(){
    int intero = 100;
    
    int* a = &(intero); //Puntatore
    int** b = &a; //Puntatore a puntatore
    printf("%d\n", intero); //100
    
    *a = 200;
    
    printf("%d\n", intero); //200
    
    **b = 300;
    printf("%d\n", intero); //300
}
/**
 * Puntatori:
    "*" => il contenuto
    "&" => indirizzo    
*/

/**
 * @brief Array randomico
 * @param array
 * @param dim
 * @param max_num
 * @return 
 */
int random_array(int array[], int dim, int max_num){
    
    int i;
    
    time_t t;
    srand((unsigned) time(&t));
    
    for(i = 0; i < dim; i++){
        array[i] = rand() % max_num;
    }
}

void stampaArrayInteri(int *array, int dim){
    printf("\n\n############## STAMPA ARRAY ##################\n");
    
    for(int i = 0; i < dim; i++){
        printf("%d\n", array[i]);
    }
    
    printf("\n\n############## FINE STAMPA ARRAY ##################\n");
}