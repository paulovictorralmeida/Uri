#include <stdio.h>

int main(){
  
  int ca, ba, pa, cr, br, pr, total = 0, frango, bife, massa;
  scanf("%d %d %d", &ca, &ba, &pa);
  scanf("%d %d %d", &cr, &br, &pr);

  if(ca < cr){
    frango = cr - ca;
    total += frango;
  }
  if(ba < br){
    bife = br - ba;
    total += bife;
  }
  if(pa < pr){
    massa = pr - pa;
    total += massa;
  }

  printf("%d\n", total);

  return 0;
}