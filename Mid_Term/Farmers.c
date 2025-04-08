#include<stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);

    while (N--)
    {
       int M1,M2,D;
       scanf("%d %d %d",&M1,&M2,&D);
       int present = D * M1;
       int differ = present / (M1 + M2) - D;
       differ = abs(differ);
       printf("%d\n",differ);
    }
    
     return 0;
}