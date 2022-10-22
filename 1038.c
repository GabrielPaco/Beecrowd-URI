#include<stdio.h>

void opcao(int codigo, int quantidade){

    switch (codigo){
    case 1:
        printf("Total: R$ %.2f\n",quantidade*4.00);
        break;
    case 2:
        printf("Total: R$ %.2f\n",quantidade*4.50);
        break;
    case 3:
        printf("Total: R$ %.2f\n",quantidade*5.00);
        break;
    case 4:
        printf("Total: R$ %.2f\n",quantidade*2.00);
        break;
    case 5:
        printf("Total: R$ %.2f\n",quantidade*1.50);
        break;
    default:
        break;
    }

}

int main(){

    int valor,qtd;
    scanf("%d %d",&valor,&qtd);
    opcao(valor,qtd);

    return 0;
}
