#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int casos, forca;
  char str[1000001];
  scanf("%d", &casos);

  while(casos--){
    scanf("%s %d", str, &forca);
    if(!strcmp(str, "Thor")){
      printf("Y\n");
    }
    else{
      printf("N\n");
    }
  }

  return 0;
}