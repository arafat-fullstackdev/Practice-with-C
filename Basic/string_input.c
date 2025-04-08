#include<stdio.h>
int main()
{
    //char a[]={'g','a','b','b','u','s','i','n','g'};
    char a[10]="gabbusing";
    int size=sizeof(a)/sizeof(char);
    // %s can input extra 1 index for \0
    scanf("%s",&a);
    printf("%s\n",a);
     printf("%d",size);

     return 0;
}