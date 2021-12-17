#include <stdio.h>

int main(){

  int casos, identificador, i, j, cs = 0;

  while(scanf("%d %d", &casos, &identificador) != EOF){
    while(casos--){
      scanf("%d %d", &i, &j);
      if(i == identificador && j == 0){
        cs++;
      }
    }
    
    printf("%d\n", cs);
    cs = 0;
  }

  return 0;
}