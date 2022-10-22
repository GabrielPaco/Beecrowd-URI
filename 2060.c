#include<stdio.h>


void showinfo(int mod2, int mod3, int mod4, int mod5){
    printf("%d Multiplo(s) de 2\n",mod2);
    printf("%d Multiplo(s) de 3\n",mod3);
    printf("%d Multiplo(s) de 4\n",mod4);
    printf("%d Multiplo(s) de 5\n",mod5);
}

void mult(){

    int qtd,num,i, mod2=0, mod3=0, mod4=0,mod5=0;
    
    scanf("%d",&qtd);

    for(i = 0; i < qtd; i++){
        scanf("%d",&num);
        if(num%2==0){
            mod2++;
        }
        if(num%3==0){
            mod3++;
        }
        if(num%4==0){
            mod4++;
        }
        if(num%5==0){
            mod5++;
        }
    }
    showinfo(mod2,mod3,mod4,mod5);
}

int main(){
    mult();
    return 0;
}
