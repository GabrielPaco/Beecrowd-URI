#include<stdio.h>

void triangulo(double maior, double menor, double meio){

    if(maior>=meio+menor){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{

     if(maior*maior == meio*meio + menor*menor){
        printf("TRIANGULO RETANGULO\n");
    }
    if(maior*maior > meio*meio + menor*menor){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(maior* maior < meio*meio + menor*menor){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(maior == meio && maior == menor){
		printf("TRIANGULO EQUILATERO\n");
	}
    if(maior == meio && maior != menor && menor != meio){
        printf("TRIANGULO ISOSCELES\n");
    }
    if(meio == menor && maior != meio && maior != menor){
        printf("TRIANGULO ISOSCELES\n");
    }
    if(maior == menor && menor != meio && maior != meio){
        printf("TRIANGULO ISOSCELES\n");
    }

    }
}

void ordem(double a, double b, double c){
    double maior,menor,meio;
    if(a>=b && a>=c){
        maior =a;
        meio = b;
        menor =c;
    }
    if(b>=a&&b>=c){
        maior =b;
        meio =a;
        menor =c;
    }
    else{
        maior =c;
        meio =a;
        menor =b;
    }
    triangulo(maior,menor,meio);
}

void dados(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    ordem(a,b,c);
}

int main(){

    dados();
    return 0;
}
