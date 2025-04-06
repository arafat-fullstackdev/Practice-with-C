#include <stdio.h>

int main() {
  int m,n;
  scanf("%d %d", &m, &n);

  if(m> n){
    printf("This is maximum:%d\n", m);
    printf("This is maximum: %d\n", n);
  }  else if(m<n){
    printf("This is maximum: %d\n",n);
    printf("This is minimum: %d\n",m);
  } else{
    printf("Both are equal");
  }
    return 0;
}