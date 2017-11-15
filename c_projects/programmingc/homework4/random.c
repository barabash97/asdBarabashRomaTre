#include "time.h"

/**
 * @brief Array randomico
 * @param array
 * @param dim
 * @param max_num
 * @return
 */
int random_array(int array[], int dim, int min, int max_num)
{

    int i;

    time_t t;
    srand((unsigned)time(&t));

    for(i = 0; i < dim; i++) {
        array[i] = rand() % max_num;
    }
}

int random_intero(int min, int max)
{
    time_t t;
    srand((unsigned)time(&t));
    
    return (rand() % max);
}