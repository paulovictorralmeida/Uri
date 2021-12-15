#include <stdio.h>
#include <string.h>

int main(){

  int i, contador =0;
  char str[21];
  scanf("%s", &str);

  for(i = 0; i < strlen(str); i++){
    contador++;
  }

  if(contador <= 9){
    printf("palavrinha\n");
  }
  else{
    printf("palavrao\n");
  }

  return 0;
}