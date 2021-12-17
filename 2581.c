#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int testes;
  char str[1000001];
  scanf("%d", &testes);
  while(testes--){
    scanf(" %[^\n]s", str);
    printf("I am Toorg!\n");
  }

  return 0;
}