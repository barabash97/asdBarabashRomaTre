#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int random_array(int array[], int dim, int max_num);

int main(int argc, char **argv)
{
	int i, dim, max_num_random; //Inizializzazione variabili
    
    //Dimensione array
    printf("Dimensione array?:\n");
    scanf("%d", &dim);
    
    int array[dim]; //Inizializzazione array
    
    printf("Valori compresi tra zero e :\n");
    scanf("%d", &max_num_random);
    
    random_array(array, dim, max_num_random);
    
    printf("\n\n#####################\n\n");
    for(i = 0; i < dim; i++){
        printf("%d\n", array[i]);
    }
    
    
	return 0;
}

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