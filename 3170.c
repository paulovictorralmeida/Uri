#include <stdio.h>

int main(){

  int b, g, falta;

  scanf("%d %d", &b, &g);

  if(b * 2 < g){
    falta = (g - (b*2)) / 2;
    printf("Faltam %d bolinha(s)\n", falta);
  }
  else{
    printf("Amelia tem todas bolinhas!\n");
  }

  return 0;
}
