#include <stdio.h>
#include<stdio.h>

int main(){
    int fun,horas;
    double sal;
    scanf("%d %d %lf",&fun, &horas, &sal);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",fun,sal*horas);

    return 0;
}
