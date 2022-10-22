#include<stdio.h>
#include<math.h>

void Bhaskara(double A, double B, double C){

    double R1, R2, D;
    D= pow(B,2) -( 4 *A *C);
    R1 = (-B + sqrt(D))/(2*A);
    R2 = (-B - sqrt(D))/(2*A);

    if(A == 0 || D <0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
}

int main(){

    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    Bhaskara (A,B,C);

    return 0;
}
