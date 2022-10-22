#include<stdio.h>

void troca(int x[]){
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d",&x[i]);
        if(x[i] < 1)  x[i]=1;{
          printf("X[%d] = %d\n",i,x[i]);
        }
    }
}

int main(){
    
    int x[10];
    troca(x);
  
    return 0;
}
