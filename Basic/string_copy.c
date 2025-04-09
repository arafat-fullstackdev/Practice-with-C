#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    // printf("%s %s",a,b);
    // logic
    //strlen(b)= find out length of b
    //for (int i = 0; i <=strlen(b); i++)
    // {
    //    printf("%d ",i);
    // a[i]=b[i];
    // }
    //C built in function  strcpy()
    strcpy(a,b);
    printf("%s %s ",a,b);
    
     return 0;
}