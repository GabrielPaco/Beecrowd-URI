#include<stdio.h>


void dados(){
    int i,number,maior=0,posicao;
    
    for(i=1;i<=100;i++){
        scanf("%d",&number);

        if(maior < number){
            maior = number;
            posicao = i;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",posicao);       
}

int main(){
    dados();
    return 0;
}
