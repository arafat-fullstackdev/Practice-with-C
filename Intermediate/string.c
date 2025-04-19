#include <stdio.h>
#include <string.h>

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
//  char str_len[100];
//  gets(str_len);
//  int i =0;

//  while(str_len[i]!='\0'){
//   i++;
//  }

//  printf("The length of string: %d\n", i);

 //* fgets()

 //? strlength
 char ab[100], bc[100];

 scanf("%s %s", &ab, &bc);
 printf("\n Before copy: %s %s", ab,bc);
 printf("\nUsing strCpy");


 strcpy(ab,bc);
 printf("\n STRcpy function: %s %s", ab,bc);


 int length= strlen(bc);
 int i;
 for(i=0; i<length; i++){
  ab[i]= bc[i];
 }

 ab[i]='\0';
 printf("\n After copy: %s %s", ab,bc);

 
 return 0;
}