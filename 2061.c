#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int n, m, abas;
  char str[10];
  scanf("%d %d", &n, &m);
  abas = n;
  while(m > 0){
    scanf("%s", str);
    if(str[0] == 'f'){
      abas = (abas - 1) + 2;
    }
    else{
      abas = abas - 1;
    }
    
    m--;
    str[0] = '\0';
  }

  printf("%d\n", abas);

  return 0;
}