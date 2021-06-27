#include <stdio.h>
int main()
{
    int x = 10;
    char ch = 'a' ;
    void *gp;
    gp = &x;

    printf("Generic pointer points to the integer value         = %d\n", *(int*)gp);
    printf("Generic pointer points to the integer address       = %p\n", (int*)gp);

    /* printf("Generic pointer points to the integer value = %d\n", *gp);
    error: invalid use of void expression */
    
    gp = &ch;
    printf("Generic pointer now points to the character         = %c\n", *(char*)gp);
    printf("Generic pointer now points to the character address = %p", (char*)gp);
    return 0;
}