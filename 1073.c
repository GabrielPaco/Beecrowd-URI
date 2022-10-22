#include<stdio.h>

int impar(int num) {
	
	if ((num%2)==0)
	  return 1;
	else return 0;
  
}

int main(){
	
	int n,i;		
	scanf ("%d",&n);
		
	for (i=1;i<=n;i++)
	
	if(impar(i))
	  printf ("%d^2 = %d\n",i,i*i);

	return 0;	
}
