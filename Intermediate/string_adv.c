#include <stdio.h>
#include <string.h>

int main() {
 char m[100];   
 char n[100];
 gets(m);
 gets(n);

 int i,j=0;

 int length_of_m = strlen(m);
 int length_of_n = strlen(n);
 int length_of_new = length_of_m + length_of_n;

 for(i = length_of_m; i<length_of_new; i++){
    m[i] =n[j];
    j++;
 }

 n[i]= '\0';

 printf("String Concat: %s %s\n", m,n);
 //? Strcat()
 char P[100];
 char Q[100];
 gets(P);
 gets(Q);
 strcat(P,Q);
 printf("Star Cat Function: %s\n", P,Q);

 
    return 0;
}