#include<stdio.h>

int main(){


    int dado, hora,minuto,segundo;
    scanf("%d",&dado);
    hora=dado/3600;
    minuto=dado%3600/60;
    segundo=dado%60;

    printf("%d:%d:%d\n",hora,minuto,segundo);


    return 0;

}
