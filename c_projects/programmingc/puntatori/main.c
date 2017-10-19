#include <stdio.h>

int main(int argc, char **argv)
{
	int intero = 100;
    
    int* a = &(intero); //Puntatore
    int** b = &a; //Puntatore a puntatore
    printf("%d\n", intero); //100
    
    *a = 200;
    
    printf("%d\n", intero); //200
    
    **b = 300;
    printf("%d\n", intero); //300
	return 0;
}

/**
    "*" => il contenuto
    "&" => indirizzo    
*/