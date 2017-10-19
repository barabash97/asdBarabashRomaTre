#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int random_array(int array[], int dim, int max_num);


/*
 *  Funzione Merge per la fusione di due
 *  componenti ordinate dell'array.
 */

void Merge(int A[], int p, int q, int r, int dim) {
  int i, j, k, B[dim];
  i = p;
  j = q+1;
  k = 0;
  while (i<=q && j<=r) {
    if (A[i]<A[j]) {
      B[k] = A[i];
      i++;
    } else {
      B[k] = A[j];
      j++;
    }
    k++;
  }
  while (i <= q) {
    B[k] = A[i];
    i++;
    k++;
  }
  while (j <= r) {
    B[k] = A[j];
    j++;
    k++;
  }
  for (k=p; k<=r; k++)
    A[k] = B[k-p];
  return;
}


/*
 *  Funzione ricorsiva MergeSort.
 */

void MergeSort(int A[], int p, int r, int dim) {
  int q;
  if (p < r) {
    q = (p+r)/2;
    MergeSort(A, p, q, dim);
    MergeSort(A, q+1, r, dim);
    Merge(A, p, q, r, dim);
  }
  return;
}

/**
 * @brief Stampa array
 * @param array
 * @param dim
 */
void stampaArray(int array[], int dim){
    for(int i = 0; i < dim; i++){
        printf("%d\n", array[i]);
    }
}
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
    
    printf("\n\n######### NON ORDINATO  ############\n\n");
    stampaArray(array, dim);
    printf("\n\n######### FINE NON ORDINATO  ############\n\n");
    MergeSort(array, 0,(dim/2) + 1, dim, dim);
     printf("\n\n#########  ORDINATO  ############\n\n");
    stampaArray(array, dim);
    printf("\n\n######### FINE ORDINATO  ############\n\n");
    stampaArray(array, dim);
    
    
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