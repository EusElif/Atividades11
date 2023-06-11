#include <stdio.h>
#define TAM 150

int main(void) {
  int t[TAM],i,maior,fmaior,menor,fmenor;
  //vetor
  for(i=0;i<TAM;i++){
    printf("N[%d] = ",i);
    scanf(" %d",&t[i]);
  }
  //maior valor
  maior=t[0];
  fmaior=0;
  for(i=1;i<TAM;i++){
    if(t[i] > maior){
      maior=t[i];
      fmaior=i;
    }
  }
  //valor menor
  menor=t[0];
  fmenor=0;
  for(i=1;i<TAM;i++){
    if(t[i] < menor){
      menor=t[i];
      fmenor=i;
    }
  }
  //saida
  printf("Maior: N[%d] = %d\n",fmaior,maior);
  printf("Menor: N[%d] = %d\n",fmenor,menor);
}
