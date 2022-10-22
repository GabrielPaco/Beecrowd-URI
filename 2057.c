#include<stdio.h>

void fuso_horario(){
    int s,v,f;
    scanf("%d %d %d",&s,&v,&f);
    if(s==0){
        s=24;
    }
    s= ((s + v + f)%24);

    printf("%d\n",s);
}

int main(){
    fuso_horario();
    return 0;
}
