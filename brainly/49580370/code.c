#include <stdio.h>

// Quantidade de aumento em porcentagem
// Deixe sempre com um "." (Exemplo: 8.0) para a variável ser um float.
#define AUMENTO 8.0

int main() {
	// Guardaremos o alário inicial de todos os trabalhadores em um array, faremos o mesmo com os novos salários.
	float salarios[8], reajustados[8];
	// Usando um for loop para lermos o salário de 8 pessoas
	for(int i = 0;i < 8;i++) {
		float salario;
		printf("Insira o salário da pessoa %d: ", i + 1);
		while(scanf("%f", &salario)!=1 && salario < 1) {
			// Salário inválido ou menor que 1.
			printf("%f\n", salario);
			if(!salario || salario < 1) {
				printf("Insira um valor válido.\n");
				// Limpar buffer do stdin
				printf("Insira o salário da pessoa %d: ", i + 1);
				while((getchar()) != '\n');
				continue;
			} else {
				break;
			}
		}
		// Guardando salário inicial
		salarios[i] = salario;
		// Guardando salário com reajuste
		reajustados[i] = salario + (float)((float)(AUMENTO / 100) * salario);
	}
	printf("\nCom aumento de %d%%, os novos salários são:\n", AUMENTO);
	for(int i = 0;i < 8;i++) {
		printf("Pessoa %d: %.2f -> %.2f\n", i + 1, salarios[i], reajustados[i]);
	}
	return 0;
}
