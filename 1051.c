#include<stdio.h>
#include<math.h>


void calc_imposto(double imp){
    double aux;
    scanf("%lf",&imp);
    if(imp <=2000.0 ){
        printf("Isento\n");
    }
    else if(imp<= 3000.0){
        aux=(imp - 2000.0)*0.08;
        printf("R$ %.2lf\n",aux);
    }
    else if(imp<=4500.0){
        aux=(imp-3000.0)*0.18+(1000*0.08);
        printf("R$ %.2lf\n",aux);
    }
    else{
    aux = (imp -4500)*0.28+(1500*0.18)+(1000*0.08);
    printf("R$ %.2lf\n",aux);
    }
}
int main(){
    
    double imp;
    calc_imposto(imp);

    return 0;
}
