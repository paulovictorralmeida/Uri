#include <stdio.h>

int main(){

  int casos, produto; 
  double qnt, total = 0;
  scanf("%d", &casos);

  while(casos--){
    scanf("%d %lf", &produto, &qnt);
    if(produto == 1001){
      total += qnt * 1.50;
    }
    else if(produto == 1002){
      total += qnt * 2.50;
    }
    else if(produto == 1003){
      total += qnt * 3.50;
    }
    else if(produto == 1004){
      total += qnt * 4.50;
    }
    else{
      total += qnt * 5.50;
    }
  }

  printf("%.2lf\n", total);

  return 0;
}