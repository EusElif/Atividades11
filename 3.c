#include <stdio.h>

int main(void) {
  double n[100],k=0;
  int s=0,i;
  //s<- negativos k <- soma positivos
  for (i=0;i<100;i++){
    printf("N:");
    scanf("%lf",&n[i]);
    //numeros negativos
    if(n[i]<0){
      s++;
    }
    //soma positiva
    if(n[i]>0){
      k+=n[i];
    }
  }
  //saida
  printf("Quantidade de negativos: %d\nSoma dos positivos: %.2lf\n",s,k);
}
