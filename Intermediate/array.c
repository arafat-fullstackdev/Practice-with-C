#include <stdio.h>

int main() {
//    int price[5];
//    int i;
   
//    for(i =0; i<5; i++){
//     scanf("%d", &price[i]);
//    }

//    printf("The price of P: %d\n", price[0]);
//    printf("The price of P: %d\n", price[1]);
//    printf("The price of P: %d\n", price[2]);
//    printf("The price of P: %d\n", price[3]);
//    printf("The price of P: %d\n", price[4]);

//? SHort way

int arr;
scanf("%d", &arr);

int price[arr];

int i;
for(i =0; i<arr; i++){
    scanf("%d", &price[i]);
}

// OutPut

for(i =0; i<arr; i++){
    printf("The price of P: %d\n", price[i]);
}


    return 0;
}