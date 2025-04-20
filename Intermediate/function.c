#include <stdio.h>

int print_function(int a,int b){  // param a,b
    printf("I am print function\n");
    // int a,b;
    // a =12;
    // b= 13;
    // scanf("%d %d", &a, &b);
    int add_value;
    add_value = a + b;

    // printf("Add sum of Values is : %d\n", add_value);
    return add_value;
}
int main() {

    int x,y;
    printf("Enter two integers: ");

    scanf("%d %d", &x,&y);
    int catch_value= print_function(x,y);  //arguments x, y

    // print_function();
    // print_function();
 

printf("Catch value is : %d\n", catch_value);

    printf("I am min Function\n");
    
    return 0;
}