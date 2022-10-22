#include<stdio.h>

void calc(int num){
    double A,B,C,Media;
	scanf("%lf %lf %lf",&A,&B,&C);
	Media = (A*2+B*3+C*5)/(10);
	printf("%.1lf\n", Media);
}

void condi(int c){
    int i;
    for(i=0;i<c;i++){
        calc(c);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    condi(n);
    
return 0;
}
