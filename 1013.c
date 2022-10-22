#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    int a,b,c,ab,ac;

    scanf("%d %d %d",&a,&b,&c);

    ab = ((a+b+abs(a-b))/2);
    ac = ((ab+c+abs(ab-c))/2);


    printf("%d eh o maior\n",ac);
    return 0;
}
