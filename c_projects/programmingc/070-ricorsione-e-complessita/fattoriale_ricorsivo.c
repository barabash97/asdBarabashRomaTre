#include <stdio.h>

int fattoriale_rec(int n);

int main(int argc, char **argv)
{
	int n;
    
    printf("Di quale numero vorresti calcolare il suo fattoriale?\n");
    scanf("%d", &n);
    printf("Il fattoriale del numero %d e\': %d\n", n, fattoriale_rec(n));
	return 0;
}

/**
 * @brief Fattoriale ricorsivo
 * @param n
 * @return 
 */
int fattoriale_rec(int n){
    int f;
    
    if(n == 0){
        f = 1; //Caso base
    } else {
        f = n * fattoriale_rec(n-1); //Caso ricorsivo
    }
    
    return f;
}