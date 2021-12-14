#include <stdio.h>

int main(){

  int casos, r1, r2, maior_raio;
  scanf("%d", &casos);

  while(casos > 0){
    scanf("%d %d", &r1, &r2);
    maior_raio = r1 + r2;
    printf("%d\n", maior_raio);
    maior_raio = 0;
    casos--;
  }

  return 0;
}