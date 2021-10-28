#include <stdio.h>

int main() {
	int numero;
	printf("Informe um número inteiro: ");
	while(scanf("%d", &numero)==1) {break;}

	if(numero >= 2 && numero <= 29) {
		printf("O número está dentro do range esperado.\n");
	} else {
		printf("O número não está dentro do range esperado.\n");
	}

	if(numero % 2 == 0) {
		printf("O número é par.\n");
	} else {
		printf("O número é impar.\n");
	}
	return 0;
}
