#include<stdio.h>

void triangulo(double a, double b, double c){

    double area;

    area = c*(a+b)/2;
    
    if(a < b+c && b < a+c && c < a+c){
        printf("Perimetro = %.1lf\n",a+b+c);
    }
    else{
        printf("Area = %.1lf\n",area);
    }
}   


int main(){

    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    triangulo(a,b,c); 

    return 0;

}
