#include <stdio.h>

int main(){

  int n, aux;
  scanf("%d", &n);
  aux = n;
  while(n > 0){
    if(n == aux){    
      printf("Ho");
    }
    else{
      printf(" Ho");
    }
    n--;
  }

  printf("!\n");

  return 0;
}