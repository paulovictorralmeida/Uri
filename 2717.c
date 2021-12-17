#include <stdio.h>

int main(){

  int n, a, b, total = 0;
  scanf("%d %d %d", &n, &a, &b);

  total = a + b;

  if(total > n){
    printf("Deixa para amanha!\n");
  }
  else{
    printf("Farei hoje!\n");
  }

  return 0;
}