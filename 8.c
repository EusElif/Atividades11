#include <stdio.h>

int main(void) {
  int n[30],i;
  for(i=0;i<30;i++){
    scanf("%d",&n[i]);
  }
  for(i=0;i<30;i++){
    if(n[i]==0){
      n[i]=1;
    }
  }
  for(i=0;i<30;i++){
    printf("N[%d] = %d\n",i,n[i]);
  }
}
