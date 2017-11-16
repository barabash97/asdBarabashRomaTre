#include <stdio.h>
#include <stdlib.h>

typedef struct elist
{
    int info;
    struct elist* next;
} elist;

typedef elist* plist;

int found(int a, plist p)
{
    while(p != NULL) {
        if(a == p->info) {
            return 1;
        }
        p = p->next;
    }
    return 0;
}

int compara_array_lista(int A[], int n, plist p)
{
    int i;
    int cont = 0;
    if(p == NULL) {
        return 0;
    } else {
        for(i = 0; i < n; i++) {
            cont = cont + found(A[i], p);
        }
    }
    return cont;
}
int main(int argc, char** argv)
{
    printf("hello world\n");
    return 0;
}
