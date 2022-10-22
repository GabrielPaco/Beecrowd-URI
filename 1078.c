#include <stdio.h>

void tabuada(int n){
int i;
for (i=1;i<=10;i++){
        printf("%d x %d = %d\n",i, n, i*n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    tabuada(n);
    return 0;
}
