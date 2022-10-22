#include<stdio.h>


void dados(){
    int idade,aux=0,i;
    double res;

    while(1){
        scanf("%d",&idade);
        if(idade<0){
            break;
        }
        res+=idade;
        aux++;
    }
    printf("%.2lf\n",res/aux);
}


int main(){
    dados();

    return 0;
}
