#include<stdio.h>
#include<math.h>

void coordenadas(double eixo_x, double eixo_y){

    if(eixo_x == 0 && eixo_y == 0){
        printf("Origem\n");
    }   
    else if(eixo_y == 0){
        printf("Eixo X\n");
    }
    else if(eixo_x == 0){
        printf("Eixo Y\n");
    }
    else if(eixo_x >= 0.1 && eixo_y >= 0.1){
        printf("Q1\n");
    }
    else if(eixo_x <= -0.1 && eixo_y >= 0.1){
        printf("Q2\n");
    }
    else if(eixo_x <= -0.1 && eixo_y <= -0.1){
        printf("Q3\n");
    }
    else if(eixo_x >= 0.1 && eixo_y <= -0.1){
        printf("Q4\n");
    }
}

int main(){

    double x, y;
    scanf("%lf %lf",&x, &y);
    coordenadas(x,y);
    return 0;
}
