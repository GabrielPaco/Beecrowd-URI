#include<stdio.h>

void duracao(int comeco,int final){

    int tempo;
    scanf("%d %d",&comeco,&final);
    if(comeco < final){
        tempo=final-comeco;
    }
    if(comeco > final){
        tempo=(final-comeco)+24;
    }
    if(comeco==final){
        tempo=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",tempo);
}

int main(){
    int h_inicio,h_termino;
    duracao(h_inicio,h_termino);
    return 0;
}
