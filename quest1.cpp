#include <stdio.h>
int main(){
	int x, y, continuar=1, calculo;
	
	while(continuar==1){
	scanf("%d", &x);
	scanf("%d", &y);
	
	calculo=x*y;
	
	printf("O resultado �: %d\n", calculo);
		
	printf("Deseja continuar essa multiplica��o?: sim-1\t N�o-2\t");
	scanf("%d", &continuar);

	} 
	

	return 0;
}
