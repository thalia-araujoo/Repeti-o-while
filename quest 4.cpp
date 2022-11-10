#include <stdio.h>

int main() {

int f=1, n, i;

printf("Calculadora de Fatorial.\n\n");

printf("Digite o valor que se deseja calcular o fatorial: \n");
scanf("%d", &n);

  for(i = 1; i <=n; i++) {
  	f*=i;
}
   printf("\nO fatorial é: %d", f);

  return 0;
}

  
