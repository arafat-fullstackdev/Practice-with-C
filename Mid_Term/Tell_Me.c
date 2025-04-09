#include<stdio.h>
int main()
{
    int M;
    scanf("%d",&M);
    
    while (M--)
    {
       int N,X;
       scanf("%d",&N);
       int A[N];
       for (int i = 0; i < N; i++)
       {
       
        scanf("%d",&A[i]);
       }

       scanf("%d",&X);
       int found = 0;

       for (int i = 0; i < N; i++)
       {
        // int num;
        // scanf("%d",&num);
        if(A[i]== X){
            found =1;
            break;
        }
       }
       
       if(found){
        printf("YES\n");
       }else{
        printf("NO\n");
       }
    }
     return 0;
}