#include <stdio.h>

int main(void) {
  double n[50],k=0;
  int i;
  //k <- soma
  for (i=0;i<50;i++){
    printf("N:");
    scanf("%lf",&n[i]);
    //soma dos vetores
    k+=n[i];
  }
  //saida
  printf("Soma dos Vetores: %.2lf\n",k);
}
