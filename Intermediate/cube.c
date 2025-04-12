#include <stdio.h>

int main() {
     // int n;

     //      scanf("%d", &n);

     // int i=1;
     // int cube;
     // while(i<=n){
 
     //    cube = i * i * i;
     //    printf("Number %d Cube %d\n", i,cube);
     //    i++;
     // }

     //Book Discount

     int bookNumber;
     scanf("%d", &bookNumber);
     int bookPrice;
     int totalPrice =0;
     int i =0;

     for(int i =0; i<bookNumber; i++){
          scanf("%d", &bookPrice);
          totalPrice = totalPrice + bookPrice;
     }

     if(totalPrice< 1000){
          printf("Total Price: %d\n", totalPrice +50);

     }else{
          printf("Total Price: %d\n", totalPrice);
     }


    return 0;
}