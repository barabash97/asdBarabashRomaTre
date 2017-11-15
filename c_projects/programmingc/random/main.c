#include <stdio.h>
#include "random.h";
int main(int argc, char **argv)
{
	test();
    
	return 0;
}

void test(){
    int n = 10;
    int array[n];
    
    random_array(array, n, 0, 100);
    stampaArray(array, n);
}
void stampaArray(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }
}
