//Arithmetic operator

#include <stdio.h>

int main() {
    int value;
    value = 400;
    value = value +100;
    printf("%d\n",value);

    int add = 20;
    //add ++;
    //++ add;
    printf("Increase value:%d\n",add++);
    printf("Increase value:%d\n",add);

    int price;
    int num1 = 300;
    int num2 = 256;
    price = num1 + num2;
    printf("%d\n",price);

    // type conversion
    double res = (float)num1 / (float)num2;
    printf("%lf\n",res);

    double val1 = 29;
    double val2 = 5;
    //double modular = val1%val2;
    //printf("Reminder: %lf\n",modular);
    double reminder = 47%3;
    printf("%lf\n",reminder);

    return 0;
}