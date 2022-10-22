#include<stdio.h>
#include<math.h>


void triang(int a, int b, int c){

    if((fabs(b-c)<a && b+c >a) && (fabs(a-c) < b && a+c > b)&&(fabs(b-a)< c && b+a  >c)){
        if(a==b && b==c)
        printf("Valido-Equilatero\n");
    
    else if(a==b || b==c|| a==c)
        printf("Valido-Isoceles\n");
    
    else
        printf("Valido-Escaleno\n");
    
    if(((a*a)==(b*b)+(c*c)) || ((b*b)==(a*a)+(c*c))|| ((c*c)==(b*b)+(a*a)))
        printf("Retangulo: S\n");
    
    else
        printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");
    
}

void dados(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    triang(a,b,c);
}


int main(){
    dados();
    return 0;
}
