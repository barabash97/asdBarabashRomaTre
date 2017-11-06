#include <stdio.h>

int valore_massimo_matrice(int **A, int r, int c){
    int i, j;
    int max = A[0][0];
    
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if(max < A[i][j]){
                max = A[i][j];
            }
        }
    }
    
    return max;
}

int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
