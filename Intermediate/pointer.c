#include <stdio.h>

int main() {
    int a;
    a=10;
    printf("The Values a:%d\n the address a: %p\n", a, &a); 
    int *p= &a;
    printf("The address of p: %p\n",p);

    printf("The values of Pointers: %d\n", *p);

    int **q=&p;
    printf("The values of Q: q =%d\n", **q);
    return 0;
}