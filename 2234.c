#include <stdio.h>

int main(){

  int h, p;
  double conta;
  scanf("%d %d", &h, &p);

  conta = (double) h/p;
  printf("%.2lf\n", conta);

  return 0;
}