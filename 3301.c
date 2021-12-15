#include <stdio.h>

int main(){

  int v[4], i;
  
  for(i = 0; i < 3; i++){
    scanf("%d", &v[i]);
  }

  if((v[2] > v[0] && v[2] < v[1]) || (v[2] < v[0] && v[2] > v[1])){
    printf("luisinho\n");
  }
  else if((v[1] > v[0] && v[1] < v[2]) || (v[1] < v[0] && v[1] > v[2])){
    printf("zezinho\n");
  }
  else if((v[0] > v[1] && v[0] < v[2]) || (v[0] < v[1] && v[0] > v[2])){
    printf("huguinho\n");
  }

  return 0;
}