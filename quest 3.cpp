#include <stdio.h>
int main(){
	float n1, n2, continuar=1, calculo;
	
	while(continuar==1){
	scanf("%f", &n1);
	scanf("%f", &n2);
	
	calculo=(n1 + n2)/2;
	
	printf("O resultado da sua m�dia �: %.1f", calculo);
		
	printf("\nDeseja continuar essa multiplica��o?: sim-1\t N�o-2\t");
	scanf("%f", &continuar);

	} 
	

	return 0;
}
