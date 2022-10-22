#include<stdio.h>
#include<math.h>
int main(){

	int km,distancia;
	scanf("%d",&distancia);


	km =distancia/((90/60.0)-(60/60.0));

	printf("%d minutos\n", km);



	return 0;
}
