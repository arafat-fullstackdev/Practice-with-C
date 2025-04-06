#include <stdio.h>

int main() {
//    int a, b;
//    a=10;
//    b=12;
//    printf("%d\n", a==b);   
//    printf("%d\n", a>b);   
//    printf("%d\n", a<b);   
//    printf("%d\n", a<=b);   
//    printf("%d\n", a>=b);   
//    printf("%d\n", a!=b);    

int marks;
scanf("%d", &marks);

 if(marks>85){
    printf("Congratulations!");
}else if(marks> 75){
    printf("Good Job");
}else if(marks>65){
    printf("You can do better");
}
else{
    printf("Try again");
}

    return 0;
}