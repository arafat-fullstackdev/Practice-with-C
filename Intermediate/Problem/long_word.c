#include <stdio.h>
#include <string.h>  // Include string.h for strlen()


int main() {

    int n; //read the words
    scanf("%d", &n);
    char word[100]; 

    for(int i =0; i<n; i++){
        scanf("%s", word);

        int length = strlen(word);

        if(length <= 4){
            printf("%s\n",word);
        }else{
            printf("%c%d%c", word[0], length-2, word[length -1]);


        }

    }   

   


    
    return 0;
}