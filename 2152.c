#include <stdio.h>

int main(){

  int testes, h, m, o;
  scanf("%d", &testes);

  while(testes--){
    scanf("%d %d %d", &h, &m, &o);
    if(o == 1){
      if(h > 9 && m > 9){
        printf("%d:%d - A porta abriu!\n", h, m);
      }
      else if(h > 9 && m < 10){
        printf("%d:0%d - A porta abriu!\n", h, m);
      }
      else if(h < 10 && m > 9){
        printf("0%d:%d - A porta abriu!\n", h, m);
      }
      else{
        printf("0%d:0%d - A porta abriu!\n", h, m);
      }
    }
    else{
      if(h > 9 && m > 9){
        printf("%d:%d - A porta fechou!\n", h, m);
      }
      else if(h > 9 && m < 10){
        printf("%d:0%d - A porta fechou!\n", h, m);
      }
      else if(h < 10 && m > 9){
        printf("0%d:%d - A porta fechou!\n", h, m);
      }
      else{
        printf("0%d:0%d - A porta fechou!\n", h, m);
      }
    }
  }

  return 0;
}