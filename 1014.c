#include<stdio.h>

int main(){

    double cons, dist, x;
    scanf("%lf %lf",&dist, &cons);

    x = (dist)/(cons);

    printf("%.3lf km/l\n", x);
    return 0;
}
