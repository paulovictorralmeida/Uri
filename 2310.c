#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int num;
  double s, b, a, s1, b1, a1, totals = 0, totalb = 0, totala = 0, pts = 0, ptb = 0, pta = 0, pors, porb, pora;
  char str[10001];
  scanf("%d", &num);

  while(num--){
    scanf("%s", str);
    scanf("%lf %lf %lf", &s, &b, &a);
    scanf("%lf %lf %lf", &s1, &b1, &a1);
    totals += s;
    totalb += b;
    totala += a;
    pts += s1;
    ptb += b1;
    pta += a1;
    str[0] = '\0';
  }

  pors = (pts * 100)/totals;
  porb = (ptb * 100)/totalb;
  pora= (pta * 100)/totala;

  printf("Pontos de Saque: %.2lf %%.\n", pors);
  printf("Pontos de Bloqueio: %.2lf %%.\n", porb);
  printf("Pontos de Ataque: %.2lf %%.\n", pora);

  return 0;
} 