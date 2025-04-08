#include<stdio.h>
int main()
{
    int N, K;
    scanf("%d %d",&N,&K);

    if (N <1 || N> 100 || K<1 || K>100)
    {
        // printf("...\n");
        return 1;
    }

    if(N>100) N = 100;
    if(K>100) K = 100;
    
    for (int i = 0; i < N; i++)
    {
       for (int j = 1; j <= K; j++)
       {
        printf("%d ",j);
       }
       printf("\n");
    }
    
     return 0;
}