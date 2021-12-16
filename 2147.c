#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int testes, i;
  double t = 0.08;
  char str[10001];
  scanf("%d", &testes);

  while(testes--){
    scanf("%s", str);

    for(i = 0; i < strlen(str); i++){
      if(str[i] == 'e'){
        t += 0.01;
      }

      if(str[i + 1] == 'i'){
        break;
      }
    }

    printf("%.2lf\n", t);

    t = 0.08;
    str[0] = '\0';
  }

  return 0;
}