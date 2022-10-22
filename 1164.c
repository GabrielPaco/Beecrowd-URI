#include<stdio.h>

int main(){

    int n,x,i,j,aux=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
      scanf("%d",&x);
        for(j=1,aux=0;j<=x/2;j++){
          if(x%j==0) aux=aux+j;
        }
      
      if(aux==x){
        printf("%d eh perfeito\n",x);
      }
        else printf("%d nao eh perfeito\n",x);
    }
return 0;
}
