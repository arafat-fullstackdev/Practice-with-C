#include <stdio.h>

int main() {
//  char str[10] = "Hello C";

//   printf("%s\n", str);   
 
  char arr[6];

 scanf("%s", arr);
 printf("%s\n", arr);

 //? gets()

 char get[5];
 gets(get);
 scanf("%s", get);
 printf("The gets function: %s\n", get);
 return 0;
}