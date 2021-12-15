#include <stdio.h>

int main(){

  int t, v[6], i, contador = 0;
  scanf("%d", &t);

  for(i = 0; i < 5; i++){
    scanf("%d", &v[i]);
  }

  for(i = 0; i < 5; i++){
    if(v[i] == t){
      contador++;
    }
  }

  printf("%d\n", contador);

  return 0;
}