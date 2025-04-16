#include <stdio.h>

int main() {
  //  int i;
  //  int n =3;
  //  int arr[n];   
  //  int new_arr[n];

  //  for(i =0; i<n; i++){
  //   scanf("%d", &arr[i]);
  //  }   

  //    // array copy
  //  for(i =0; i<n; i++){
  //   new_arr[i] = arr[i];
  //  }

  //  printf("Old Aray\n");

  //  for(i =0; i<n; i++){
  //   printf("Old Array: %d\n", &arr[i]);
  //  }


  //  printf("New array\n");

  //  for(i =0; i<n; i++){
  //   printf("New array: %d\n", new_arr[i]);
  //  }

   // Array sum

   int arrayS[4]={0,5,6,9};
   scanf("%d", &arrayS);

   int sum,i;
   sum=0;
   


   for(i =3; i>=0; i--){
   sum= sum + arrayS[i];
   }

   printf("The Array of sum:%d\n", sum);




   
    return 0;
}