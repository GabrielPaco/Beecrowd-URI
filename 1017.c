#include<stdio.h>
#include<math.h>
int main(){

	double tempo,velocidade,consumo;

	scanf("%lf %lf",&tempo,&velocidade);

	consumo=(tempo*velocidade/12);

	printf("%.3lf\n", consumo);

	return 0;
}
