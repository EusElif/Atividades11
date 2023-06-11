#include <stdio.h>

int main(void) {
  int n[700],i,d=0,t=0,b=0;
  for(i=0;i<700;i++){
    //lendo o vetor
    printf("N:");
    scanf("%d",&n[i]);
    //verificando se eh multiplo de 2
    if (n[i]%2==0){
      d++;
    }
    //verificando se eh multiplo de 3
    if(n[i]%3==0){
      t++;
    }
    //verificando se eh multiplo de 2 e de 3
    if (n[i]%2==0 && n[i]%3==0){
      b++;
    }
  }
  printf("\n");
  //Resultado
  printf("Multiplos de 2: %d\nMultiplos de 3: %d\nMultiplos de 2 e de 3: %d\n",d,t,b);
}
