#include <stdio.h>
#include <stack.h>


int main(int argc, char **argv)
{
	int i;
    Stack *s = new_stack();
    
    printf("\n\n");
    for(i = 1; i < 11;i++){
        printf("ora inserisco %d\n", i);
        PUSH(s, i);
    }
    
    printf("\n\n");
    for(i = 1; i < 11; i++){
        printf("ora estraggo %d\n", POP(s));
    }
    return 0;
}
