#include <stdio.h>

int main(){

  int v[6], i;
  for(i = 0; i < 5; i++){
    scanf("%d", &v[i]);
  }

  if(v[0] == 1){
    if((v[1] + v[2])%2 == 0 && v[4] == 0 || v[3] == 0 && v[4] == 1){
      printf("Jogador 1 ganha!\n");
    }
    else{
      if(v[3] == 0 && v[4] == 0){
        printf("Jogador 2 ganha!\n");
      }
      else if(v[3] == 1 && v[4] == 0){
        printf("Jogador 1 ganha!\n");
      }
      else if(v[3] == 1 && v[4] == 1){
        printf("Jogador 2 ganha!\n");
      }
      else if(v[3] == 0 && v[4] == 1){
        printf("Jogador 1 ganha!\n");
      }
    }
  }
  else{
    if((v[1] + v[2])%2 != 0 && v[4] == 0 || v[3] == 0 && v[4] == 1){
      printf("Jogador 1 ganha!\n");
    }
    else{
      if(v[3] == 0 && v[4] == 0){
        printf("Jogador 2 ganha!\n");
      }
      else if(v[3] == 1 && v[4] == 0){
        printf("Jogador 1 ganha!\n");
      }
      else if(v[3] == 1 && v[4] == 1){
        printf("Jogador 2 ganha!\n");
      }
      else if(v[3] == 0 && v[4] == 1){
        printf("Jogador 1 ganha!\n");
      }
    }
  }
  
  return 0;
}