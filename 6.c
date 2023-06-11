#include <stdio.h>
#define TAM 150

int main(void) {
  int v1[TAM],v2[TAM],p[TAM]={0},i;
  //elementos do vetor 1
  for(i=0;i<TAM;i++){
    printf("V1[%d] = ",i);
    scanf(" %d",&v1[i]);
  }
  //elementos do vetor 2
  for(i=0;i<TAM;i++){
    printf("V2[%d] = ",i);
    scanf(" %d",&v2[i]);
  }
  //multiplicação dos elementos
  for(i=0;i<TAM;i++){
    p[i]=v1[i]*v2[i];
  }
  for(i=0;i<TAM;i++){
    printf("P[%d] = %d\n",i,p[i]);
  }
  
}
