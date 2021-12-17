#include <stdio.h>
#include <string.h>

int main(){

  int casos, v[10001], i, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
  scanf("%d", &casos);

  for(i = 0; i < casos; i++){
    scanf("%d", &v[i]);
     
     if(v[i]%2 == 0){
      m2++;
    }
    if(v[i]%3 == 0){
      m3++;
    }
    if(v[i]%4 == 0){
      m4++;
    }
    if(v[i]%5 == 0){
      m5++;
    }
  }

  printf("%d Multiplo(s) de 2\n", m2);
  printf("%d Multiplo(s) de 3\n", m3);
  printf("%d Multiplo(s) de 4\n", m4);
  printf("%d Multiplo(s) de 5\n", m5);

  return 0;
}