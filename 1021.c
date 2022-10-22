#include<stdio.h>

void notas(double x){
    int j,k;
    double a;
    a=x*100;
    j=(int)x;
    k=(int)a;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",j/100);
    j=j %100;
    printf("%d nota(s) de R$ 50.00\n",j/50);
    j=j %50;
    printf("%d nota(s) de R$ 20.00\n",j/20);
    j=j %20;
    printf("%d nota(s) de R$ 10.00\n",j/10);
    j=j %10;
    printf("%d nota(s) de R$ 5.00\n",j/5);
    j=j %5;
    printf("%d nota(s) de R$ 2.00\n",j/2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",j%2);
    k=k %100;
    printf("%d moeda(s) de R$ 0.50\n",k/50);
    k=k %50;
    printf("%d moeda(s) de R$ 0.25\n",k/25);
    k=k %25;
    printf("%d moeda(s) de R$ 0.10\n",k/10);
    k=k %10;
    printf("%d moeda(s) de R$ 0.05\n",k/5);
    k=k %5;
    printf("%d moeda(s) de R$ 0.01\n",k/1);


}



int main(){
 double x;
 scanf("%lf",&x);

 notas(x);

 return 0;
}
