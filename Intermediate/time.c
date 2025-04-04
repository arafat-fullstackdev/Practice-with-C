// Days and Time
#include <stdio.h>

int main() {
    int numbers;
    scanf("%d",&numbers);
    int year,days;

    year = numbers/365;
    printf("Year:%d\n",year);

    days= numbers%365;
    printf("Days:%d\n",days);

    
    return 0;
}