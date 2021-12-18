#include <stdio.h>

int main(){

  int n, v[100001], i;
  double calculo, contador = 0;
  while(scanf("%d", &n) != EOF){

    for(i = 0; i < n; i++){
      scanf("%d", &v[i]);
      if(v[i] == 1){
        contador++;
      }
    }

    calculo = (double)n * 2/3;

    if(contador >= calculo){
      printf("impeachment\n");
    }
    else{
      printf("acusacao arquivada\n");
    }
    contador = 0;
  }

  return 0;
}