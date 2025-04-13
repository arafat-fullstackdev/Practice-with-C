#include <stdio.h>

int main() {
 int i,j,value;
 int line_number;
 printf("Give a number : ");
 scanf("%d", &value);

 printf("Line Number:\n");

 scanf("%d", &line_number);
 
 for(i =1; i<= line_number; i++){

    for(j=1; j<=i; j++){
        printf("%d", value);
    }
    printf("\n");
 }

 //Series of number;

 int n;
 int sum =0;
 for(n =0; n<=29; n=n+2){
    sum =sum +n;
    printf("%d\n", sum);
 }
    return 0;
}
