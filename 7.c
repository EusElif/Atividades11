#include <stdio.h>
#define TAM 5

int main(void) {
  int v1[TAM],v2[TAM]={0},i;
  //elementos do vetor 1
  for(i=0;i<TAM;i++){
    printf("V1[%d] = ",i);
    scanf(" %d",&v1[i]);
    //substituindo vetores positivos
    if(v1[i]>0){
      v2[i]=v1[i];
    }
  }
  for(i=0;i<TAM;i++){
    printf("V2[%d] = %d\n",i,v2[i]);
  }
}
