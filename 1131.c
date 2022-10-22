#include<stdio.h>

void showinfo(int total, int contador_inter, int contador_gremio, int contador_empate){

    printf("%d grenais\n",total);
    printf("Inter:%d\n",contador_inter);
    printf("Gremio:%d\n",contador_gremio);
    printf("Empates:%d\n",contador_empate);
    
    if(contador_inter > contador_gremio){
        printf("Inter venceu mais\n");
    }
    else if(contador_inter < contador_gremio){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Empates venceu mais\n");
    }

}


void grenal(int inter, int gremio){

    int contador_inter = 0, contador_gremio = 0,contador_empate = 0, total = 0;
    int num;
    while(1){
        scanf("%d %d",&inter,&gremio);
        if( inter > gremio){
            contador_inter ++;
        }
        if(inter < gremio){
            contador_gremio ++;
        }
        if(inter == gremio){
            contador_empate++;
        }
        total++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&num);
        if(num == 2){
            break;
        }
    }
    showinfo(total, contador_inter, contador_gremio, contador_empate);
}


int main(){
    int inter, gremio;
    grenal(inter, gremio);

    return 0;
}
