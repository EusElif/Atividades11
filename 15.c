#include <stdio.h>
#include <stdlib.h>
#define tam 30
#define tam2 50

int main(void){
  int i, a;
  int v1[tam2], v2[tam];
  for(i=0 ; i<tam2; i++){
    printf("Matriculas Logica Programaçao:");
    scanf("%d", &v1[i]);
  }
  printf("\n");
  for(i=0; i<tam; i++){
    printf("Matriculas Linguaguem de Programação:");
    scanf("%d", &v2[i]);
  }
  printf("\n");
  for(i=0; i<tam2; i++){
    for(a=0; a<tam; a++){
      if(v1[i] == v2[a]){
        printf("Matriculas Repetidas: %d\n", v1[i]);
      }
    }
  }
return 0;
}
