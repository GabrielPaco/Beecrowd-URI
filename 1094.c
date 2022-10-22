#include<stdio.h>

void showinfo(int total, int coelho, int rato, int sapo){
    float porcento_coelho, porcento_rato, porcento_sapo;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",coelho);
    printf("Total de ratos: %d\n",rato);
    printf("Total de sapos: %d\n",sapo);
    
    porcento_coelho = coelho * 100.0 / total;
    porcento_rato = rato * 100.0 / total;
    porcento_sapo = sapo * 100.0/ total;

    printf("Percentual de coelhos: %.2f %%\n",porcento_coelho);
    printf("Percentual de ratos: %.2f %%\n",porcento_rato);
    printf("Percentual de sapos: %.2f %%\n",porcento_sapo);

}

void leitura(){

    int qtd, n, i , total = 0, coelho = 0, sapo = 0, rato = 0;
    char especie;

    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d %c",&qtd,&especie);
        
        if(especie == 'C'){
            coelho += qtd;
        }
        else if( especie == 'R'){
            rato += qtd;
        }
        else if( especie == 'S'){
            sapo += qtd;
        }
    total += qtd;
    }
    showinfo(total, coelho, rato, sapo);
}


int main(){

    leitura();

    return 0;
}
