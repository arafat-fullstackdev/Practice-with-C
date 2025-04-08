#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    // c  = tolower(c);

    if(c =='a'|| c == 'A'|| 
       c=='e' || c == 'E' ||
       c=='i' || c == 'I' || 
       c=='o' || c == 'O' || 
       c=='u' || c == 'U') {
        printf("This word have vowel\n");
    }else{
        printf("There is no vowel");
    }

    return 0;
}