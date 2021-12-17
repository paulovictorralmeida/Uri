#include <stdio.h>
#include <string.h>

int main(){

  char str[100001];
  int p, es = 0, jipe = 0;

  while(scanf("%s", str) != !strcmp(str, "ABEND")){
    scanf("%d", &p);
    if(str[0] == 'S'){
      es += p;
      jipe++;
    }
    else{
      es -= p;
      jipe--;
    }
  }

  printf("%d\n%d\n", es, jipe);

  return 0;
}