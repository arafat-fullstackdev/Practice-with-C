#include <stdio.h>

int main() {
  int i,j;
  int m=0;
  
  for(i =0; i<=10; i++){
    //printf("Hello C: %d\n", m);
    m++;
  }

  for(j =0; j<=24; j++){
    if(j%2 ==0){
      printf(" Hello C, Nice to meet you!:%d\n", j);
    }
  }
    return 0;
}