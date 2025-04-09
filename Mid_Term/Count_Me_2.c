#include<stdio.h>
#include<string.h>

int addConsonant( char *str){
    int count = 0;
    int len = strlen(str);
    for(int i =0;i<len;i++){
        char che = str[i];
        
        if(che !='a' && che !='e' && che !='i' && che !='o' && che !='u'){
            count++;
        }
    }
    return count;
}

int main()
{
//Define string length
char str[100001];
scanf("%s",str);

int consonantAdd = addConsonant(str);
printf("%d",consonantAdd);
    
     return 0;
}