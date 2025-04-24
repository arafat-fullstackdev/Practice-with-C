#include <stdio.h>

void change_value(int* y){
    *y = *y+10;
    printf("Print from void fun :%d\n", *y);
}
int main() {
    int x;
    x =10;

    printf("Before Chang: %d\n", x);
    change_value(&x);

    printf("After Chang: %d\n", x);
    // int a;
    // a=10;
    // printf("The Values a:%d\n the address a: %p\n", a, &a); 
    // int *p= &a;
    // printf("The address of p: %p\n",p);

    // printf("The values of Pointers: %d\n", *p);

    // int **q=&p;
    // printf("The values of Q: q =%d\n", **q);
    return 0;
}