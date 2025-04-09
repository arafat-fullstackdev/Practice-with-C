#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        //Define arry
      char S[10001];
      scanf("%s", S);

      int capital=0, small=0, digit=0;

      for (int i = 0;  S[i] != '\0'; i++)
      {
        char ch = S[i];
        if(ch >= 'A' &&  ch <= 'Z')
        capital++;
        
      else if(ch >= 'a' && ch<= 'z')
       small++;
      
     
      else if(ch >= '0' && ch <= '9')
         digit++;
      
    
      
    }
    printf("%d %d %d\n", capital, small, digit);
    }

    
    
     return 0;
}