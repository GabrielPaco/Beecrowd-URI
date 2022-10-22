#include<stdio.h>

void logica(int par,int j1,int j2,int roubo,int a,int add,int par_impar){
    add = j1+j2;
    if(add%2==0){
        par_impar=0;
    }else{
        par_impar=1;
    }
    if(par==1 && par_impar==0 && roubo ==0 && a==0){
        printf("Jogador 1 ganha!\n");
    }
    else if(par==0 && par_impar==1 && roubo ==0 && a==0){
        printf("Jogador 1 ganha!\n");
    }
    else if(roubo==1 &&a==0){
        printf("Jogador 1 ganha!\n");
    }
    else if(roubo==1 && a==1){
        printf("Jogador 2 ganha!\n");
    }
    else if(par==1 && par_impar==1 && roubo ==0 && a==0){
        printf("Jogador 2 ganha!\n");
    }
    else if(par==0 && par_impar==0 && roubo ==0 && a ==0){
        printf("Jogador 2 ganha!\n");
    }
    else if(roubo==0 && a==1){
        printf("Jogador 1 ganha!\n");
    }
}

void dados(){
    int p,j1,j2,r,a;
    int add,par_impar;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
    logica(p,j1,j2,r,a,add,par_impar);
}

int main(){

    dados();
    return 0;
}
