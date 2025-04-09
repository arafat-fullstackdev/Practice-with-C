#include<stdio.h>
int main()
{
    char S[10001];
    scanf("%s",S);
    for (char i = 'a'; i <= 'z' ; i++)
    {
       int count =0;
       for (int j = 0; S[j] != '\0'; j++)
       {
        if(S[j] ==i){
            count++;
        }
       }
       if(count>0){
        printf("%c - %d\n", i, count);
       }
       
    }
    
     return 0;
}