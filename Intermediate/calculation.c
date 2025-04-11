#include <stdio.h>

int main() {
    int i,sum;
    sum=0;
    
    for(i =0; i<=12; i++){
        sum =sum +2;
    }
    printf("The sum of value is : %d\n", sum);

    int n;

    scanf("%d", &n);

    for(i =1; i<=n; i++){
        sum = sum +i;
    }

    printf("The series of sum: %d\n", sum);

    return 0;
}