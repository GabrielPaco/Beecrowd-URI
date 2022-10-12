#include<stdio.h>
#include<math.h>

int main(){
    double raio,area,pi = 3.14159;
    scanf("%lf",&raio);

    area = pow(raio,2) * pi;

    printf("A=%.4lf\n",area);
    return 0;
}
