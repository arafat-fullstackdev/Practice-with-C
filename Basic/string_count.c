#include<stdio.h>
int main()
{
    char A[100];
    scanf("%s",&A);
    int count=0;
    for (int i = 0; A[i] !='\0'; i++)
    {
        count++;
    }
    printf("%d\n",count);
    
     return 0;
}