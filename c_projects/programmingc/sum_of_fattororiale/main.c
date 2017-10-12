#include <stdio.h>

int sum_of_fact(int n);
int fact(int n);

int fattoriale_ricorsivo(int n){
    int f = 0;
    
    if(n == 0){
        f = 1;
    } else{
        f = n * fattoriale_ricorsivo(n-1);
    }
    
    return f;
    
}
int main(int argc, char **argv)
{
	int n;
    scanf("%d", &n);
    printf("Fattoriale vale: %d", fattoriale_ricorsivo(n));
	return 0;
}

int sum_of_fact(int n){
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        sum = sum + fact(i);
    }
    
    return sum;
}

int fact(int n){
    int f = 1;
    
    for(int i = 2; i < n; i++){
        f = f * i;
    }
    
    return f;
}

