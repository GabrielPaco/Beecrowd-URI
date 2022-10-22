#include<stdio.h>


void selec(double x[]){
    int i;
    for(i = 0; i < 100; i++){
        scanf("%lf",&x[i]);
        if(x[i] <= 10){
            printf("A[%d] = %.1lf\n",i,x[i]);
        }  
    }
}

int main(){
    
    double x[100];
    selec(x);

    return 0;
}
