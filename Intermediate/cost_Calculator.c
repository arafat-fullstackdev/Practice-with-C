#include <stdio.h>

int main() {
    int quantity, price;

   
    //printf("Enter Quantity: ");
    scanf("%d\n", &quantity);

   


    //printf("Enter Price: ");
    scanf("%d\n", &price);

 

   int total_cost = (quantity * price);

   //printf("Your total cost is:%d\n",total_cost);

   //Double 
   int count;
   int  amount;

    printf("Enter count: ");
   scanf("%d",&count);

   printf("Enter Amount: ");
   scanf("%d",&amount);

//    printf("total Amount\n");
   int total_amount = count * amount;
   printf("Total Amount:%d\n",total_amount);
    
    return 0;
}