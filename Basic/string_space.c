#include<stdio.h>
int main()
{
    char sd[200];
    fgets(sd,120,stdin);
    //arry length stop
    //sd[10]='\0';
    printf("%s",sd);
    //int sz =sizeof(sd)/sizeof(char);
    //printf("%d\n",sz);
     return 0;
}