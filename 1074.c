#include<stdio.h>

void catch_dados(){
    int qtd,number,i;
    scanf("%d",&qtd);
    for(i=0;i<qtd;i++){
        scanf("%d",&number);

        if(number %2==0 && number >0){
            printf("EVEN POSITIVE\n");
        } else if(number %2==0 && number <0){
            printf("EVEN NEGATIVE\n");
        }else if(number %2!= 0 && number >0){
            printf("ODD POSITIVE\n");
        }else if(number %2!=0 && number <0){
            printf("ODD NEGATIVE\n");
        }
        else{
            printf("NULL\n");
        }
    }
}


int main(){
    catch_dados();
    return 0;
}
