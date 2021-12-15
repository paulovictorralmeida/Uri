#include <stdio.h>
#include <math.h>

int main() {

  double a, b, c, formula, r1, r2;
  scanf("%lf %lf %lf", &a, &b, &c);
  formula = (b*b) - (4*a*c);

  if(formula > 0 && a > 0){
    r1 = ((-b) + sqrt(formula))/ (2 * a);
    r2 = ((-b) - sqrt(formula))/ (2 * a);
    printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
  }
  else if(formula < 0 || a == 0){
    printf("Impossivel calcular\n");
  }
  else if(formula == 0 && a > 0){
    r1 = ((-b) + sqrt(formula))/ (2 * a);
    r2 = ((-b) - sqrt(formula))/ (2 * a);
    printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
  }
  
  return 0;
}