#include<stdio.h>


void dobro(int x[]){
    int i,n;
    scanf("%d",&n);
    for(i = 0; i < 10; i++){
        x[i]=n;
        printf("N[%d] = %d\n",i,n);
        n*=2;
    }
}

int main(){
    
    int x[50];
    dobro(x);

    return 0;
}
