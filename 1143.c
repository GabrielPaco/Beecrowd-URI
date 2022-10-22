#include<stdio.h>
#include<math.h>


void quadrado(int num){

    int i,x,y;
    for(i = 1; i<=num; i++){
        x = pow(i,2);
        y = pow(i,3);
            printf("%d %d %d\n",i,x,y);
        }
}

int main(){

    int n;
    scanf("%d",&n);
    quadrado(n);

    return 0;
}
