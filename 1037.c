#include<stdio.h>


void inter(float n){

    if((n >= 0) &&  (n <=25)){
        printf("Intervalo [0,25]\n");
    }
    else if((n>25)&&(n<=50)){
        printf("Intervalo (25,50]\n");
    }
    else if((n>50)&&(n<=75)){
        printf("Intervalo (50,75]\n");
    }
    else if((n>75)&&(n<=100)){
        printf("Intervalo (75,100]\n");
    }
    else{
        printf("Fora de intervalo\n");
    }
}


int main(){

    float a;
    scanf("%f",&a);
    inter(a);


    return 0;
}
