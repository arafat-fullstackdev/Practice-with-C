#include <stdio.h>

int main() {

     int j,i;

     for(i = 0; i<=5; i++){
        printf("For Loop: %d\n",i);
     }
     j =1;

     while(j <= 10){
        printf("Hello while Loop: %d\n", j);
        j++;
     }
     // Do while loop
     printf("Do while Start\n");
     int m;
     m = 6;
     do {
        printf("Do While Loop: %d\n", m);
        m++;
     } while(m <=5);
     
     printf("Do while Ended\n");

     return 0;
}