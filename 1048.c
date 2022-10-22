#include<stdio.h>


void calc_ajuste(double salario){
    double reajuste;

    scanf("%lf",&salario);

    if(salario<=400){

        reajuste=salario*0.15;
        salario=salario+reajuste;
        printf("Novo salario: %.2lf\n",salario);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else{

        if(salario >400 && salario <=800){
            reajuste=salario*0.12;
            salario=salario+reajuste;
            printf("Novo salario: %.2lf\n",salario);
            printf("Reajuste ganho: %.2lf\n",reajuste);
            printf("Em percentual: 12 %%\n");
    }
    else{
        
        if(salario >800 && salario <=1200){
            reajuste=salario*0.1;
            salario=salario+reajuste;
            printf("Novo salario: %.2lf\n",salario);
            printf("Reajuste ganho: %.2lf\n",reajuste);
            printf("Em percentual: 10 %%\n");
    }
    else{
        if(salario >1200 && salario <= 2000){
            reajuste=salario*0.07;
            salario=salario+reajuste;
            printf("Novo salario: %.2lf\n",salario);
            printf("Reajuste ganho: %.2lf\n",reajuste);
            printf("Em percentual: 7 %%\n");
    }
     else{
            reajuste=salario*0.04;
            salario=salario+reajuste;
            printf("Novo salario: %.2lf\n",salario);
            printf("Reajuste ganho: %.2lf\n",reajuste);
            printf("Em percentual: 4 %%\n");
          }
         }
        }
      }
}

int main(){
    double valor;
    calc_ajuste(valor);

    return 0;
}
