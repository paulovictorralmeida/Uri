#include <stdio.h>

int main(){

  int level, i;
  long long int m, conta;
  scanf("%d %lld", &level, &m);
  
  do{
    conta = m * level;
    printf("%lld\n", conta);
    scanf("%d %lld", &level, &m);
  }while(level != 0);
  
  return 0;
}