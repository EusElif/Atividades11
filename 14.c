#include <stdio.h>
#define tam 150

int main() {
	int v[tam], e=30, i, q=0;
  //e - numero a ser encontrado q-dira onde ele esta
	for (i=0;i<tam;i++){
		scanf("%d", &v[i]);
  }
	for (i=0;i<tam;i++){
	        //verifica onde esta o  numero
		if (e==v[i]){
			q=i;
			//saida
      if (q){
  		printf("Encontrado no vetor: %d\n", q);
    }else
  		printf("Não está no vetor.\n");
    }
	}
    return 0;
}
