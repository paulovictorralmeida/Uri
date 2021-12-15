#include <stdio.h>

int main(){

  int casos, n, i;
  scanf("%d", &casos);

  for(i = 0; i < casos; i++){
    scanf("%d", &n);
    printf("resposta %d: %d\n", (i+1), n);
  }

  return 0;
}