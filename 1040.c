#include<stdio.h>

void exame( float m){

    float exame, final;
    scanf("%f",&exame);
    printf("Nota do exame: %.1f\n",exame);
    final = (exame + m) / 2;
    if(final >= 5.0){
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n",final);
    }
    else{
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f",final);
    }
}

void media(float n1, float n2, float n3, float n4){

    float m;

    m = (n1 *2 + n2*3 + n3*4 + n4*1) / 10;
    printf("Media: %.1f\n",m);

    if(m < 5.0){
        printf("Aluno reprovado.\n");
    }
    if(m >= 5.0 && m <= 6.9){
        printf("Aluno em exame.\n");
        exame(m);
    }
    if(m >= 7.0 && m <= 10.0){
        printf("Aluno aprovado.\n",m);
    }
}

int main(){

    float n1,n2,n3,n4;
    scanf("%f %f %f %f",&n1, &n2, &n3, &n4);
    media(n1,n2,n3,n4);

    return 0;
}
