#include<stdio.h>

int main(){
    int fat,x;
    scanf("%d",&x);
    for(fat=1;x>1;x=x-1)
    fat=fat*x;
    printf("%d\n",fat);

    return 0;
}
