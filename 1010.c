#include<stdio.h>

int main(){

	int pecas1,numero1,pecas2,numero2;

	double valor1,valor2,aux;

	scanf("%d %d %lf", &pecas1,&numero1,&valor1);
	scanf("%d %d %lf", &pecas2,&numero2,&valor2);
	
	aux = (numero1*valor1)+(numero2*valor2);

	printf("VALOR A PAGAR: R$ %.2lf\n", aux );

	return 0;

}
