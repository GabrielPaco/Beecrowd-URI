#include<stdio.h>
void troca(int*a,int*b){
  
  int aux;
  aux=*a;
  *a=*b;
  *b=aux;
  
}
int main(){
  
  int m,n,sum=0,i;
  scanf("%d%d",&m,&n);
  
  while(m>0 && n>0){
    if(m>n)
      troca(&m,&n);
    for(i=m;i<=n;i++){
      printf("%d ",i);
      sum+=i;
    }
      
    printf("Sum=%d\n",sum);
    scanf("%d%d",&m,&n);
    sum=0;
    }
return 0;
}

