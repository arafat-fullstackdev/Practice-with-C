#include <stdio.h>

int main() {
    // Number check
     int number;
     scanf("%d", &number);
     
     if(number == 0){
        printf("zero\n");
     }else if(number>0){
        printf("Positive number\n");
     }else{
        printf("Negative number");
     }

     // Even or Odd
     int value;
     scanf("%d", &value);

     if(value % 2 ==0){
        printf("Even Number");
     }else if(value % 2 == 1){
        printf("Odd Number");
     }else{
        return 0;
     }
    return 0;
}
