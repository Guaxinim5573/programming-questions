#include <stdio.h>

int main() {
	int soma = 0;
	int maior = -2147483647;
	int menor = 2147483647;
	for(int i = 0;i < 10;i++) {
		int nota;
		printf("Insira a nota do aluno %d: ", i + 1);
		while(fscanf(stdin, "%d", &nota)==1) {break;}
		soma += nota;
		if(nota > maior) {
			maior = nota;
		}
		if(nota < menor) {
			menor = nota;
		}
	}
	float media = (float) soma / 10;
	printf("Soma: %d\nMédia: %.2f\nMaior: %d\nMenor: %d\n", soma, media, maior, menor);
}
