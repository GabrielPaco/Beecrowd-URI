#include<stdio.h>

void showinfo(int alcool, int diesel, int gasolina){

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);
}

void leitura(){

    int comb, gasolina = 0, alcool = 0, diesel = 0;
    
    while (comb != 4){
        scanf("%d",&comb);
        if(comb == 1){
            alcool++;
        }
        else if(comb == 2){
            gasolina++;
        }
        else if(comb == 3){
            diesel++;
        }
    }
    showinfo(alcool, diesel, gasolina);
}

int main(){
    leitura();
    return 0;
}
