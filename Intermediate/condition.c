#include <stdio.h>

int main() {
    int tk;
    scanf("%d", &tk);

    //Nested condition
    if(tk == 6000){
        printf("We go to Island!\n");
        if(tk >= 10000){
            printf("We go Yangun!\n");
        }if(tk == 15000){
            printf("WE go Kulalampur\n");
        }if(tk <6000 && tk > 10000 ){
            printf("WE go DSP!\n");
        }

    }else{
        printf("WE GO TO LAKSAM!");
    }
    return 0;
}