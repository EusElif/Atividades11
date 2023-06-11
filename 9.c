#include <stdio.h>
#include <stdlib.h>
#define TAM 100

main(){
  int v1[TAM], v2[TAM];
  int i,j,x=0;
  for(i=0;i<TAM;i++){
    //leitura do vetor
    printf("Vetor [%d]: ", i);
    scanf("%d", &v1[i]);
  }
  for(i=0;i<TAM;i++){
    //separação entre positivos e nulos e negativos
    if(v1[i]>0){
      v2[x]=v1[i];
      x++;
    }
  }
  for(i=0;i<x;i++){
    printf("Novo Vetor [%d]: %d\n", i, v2[i]);
  }
  return 0;
}
