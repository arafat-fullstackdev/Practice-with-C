#include <stdio.h>

int main() {
//  char str[10] = "Hello C";

//   printf("%s\n", str);   
 
  //char arr[6];

//  scanf("%s", arr);
//  printf("%s\n", arr);

 //? gets()

//  char get[5];
//  gets(get);
//  scanf("%s", get);
//  printf("The gets function: %s\n", get);

 // String length
 char str_len[100];
 gets(str_len);
 int i =0;

 while(str_len[i]!='\0'){
  i++;
 }

 printf("The length of string: %d\n", i);

 //* fgets()
 
 return 0;
}