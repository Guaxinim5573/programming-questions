#include <stdio.h>

int main() {
	int notas[10];
	for(int i = 0;i < 10;i++) {
		int nota;
		printf("Insira a nota do aluno %d: ", i + 1);
		while(fscanf(stdin, "%d", &nota)==1) {break;}
		notas[i] = nota;
	}

	// a) a soma dos números
	int soma = 0;
	for(int i = 0;i < 10;i++) {
		soma += notas[i];
	}
	printf("Soma dos números: %d\n", soma);

	// b) a média dos números;
	float media = (float) soma / 10;
	printf("Média dos números: %.2f\n", media);

	// c) o maior número;
	// Começamos com a variável "maior" que vai guardar o maior número
	// O valor dela começa com -2147483648, que é o menor número que pode existir em um "int"
	int maior = -2147483647;
	for(int i = 0;i < 10;i++) {
		if(notas[i] > maior) {
			maior = notas[i];
		}
	}
	printf("O maior número: %d\n", maior);

	// d) o menor número;
	// Começamos com a variável "menor" que vai guardar o menor número
	// O valor dela começa com 2147483647, que é o maior número que pode existir em um "int"
	int menor = 2147483647;
	for(int i = 0;i < 10;i++) {
		if(notas[i] < menor) {
			menor = notas[i];
		}
	}
	printf("O menor número: %d\n", menor);
	return 0;
}
