#include <stdio.h>

int main() {
 
    char c;
    scanf("%c", &c);

//     if(c== 'A'){
//         printf("Excellent\n");
//     }else if(c == 'B'){
//         printf("Good\n");
//     }else if(c== 'C'){
//         printf("Need improvement\n");

// }else{
//     printf("Try again\n");

// }

//?Switch case

  switch(c)
  {
    case 'A':
     printf("Excellent\n"); 
     break;
    case 'B':
     printf("Good\n");
     break; 
    case 'C':
     printf("Nice\n"); 
     break;
      case 'D':
     printf("Try Again\n");
    default:
     printf("Give me correct info");
    // break; 
  }
    
    return 0;
}