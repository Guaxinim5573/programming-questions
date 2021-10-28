#include <stdio.h>
#include <locale.h>

int main() {
	// Questão especifica o uso de locale.
	setlocale(LC_ALL, "Portuguese");

	char operacao;
	printf("entre com a operação: ");
	while(fscanf(stdin, "%c", &operacao)==1) {
		// fscanf deixa um "\n" depois de ler o que precisa.
		// essa próxima linha serve pra ler todos os caracteres até um '\n'
		// Veja: https://www.geeksforgeeks.org/clearing-the-input-buffer-in-cc/
		while((getchar()) != '\n');
		// Se a operação não for nenhuma das que queremos, mostra "Opção inválida."
		if(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/') {
			printf("Opção inválida.\n");
			printf("entre com a operação: ");
			continue;
		}
		break;
	}
	// Variável para os 2 números
	float primeiro, segundo;
	printf("entre com o primeiro número: ");
	while(fscanf(stdin, "%f", &primeiro)!=1) {
		printf("Número inválido.\n");
		printf("entre com o primeiro número: ");
		while((getchar()) != '\n');
		continue;
	}
	printf("entre com o segundo número: ");
	while(fscanf(stdin, "%f", &segundo)!=1) {
		printf("Número inválido.\n");
		printf("entre com o segundo número: ");
		while((getchar()) != '\n');
		continue;
	}
	float resultado;
	switch(operacao) {
		case '+':
			resultado = primeiro + segundo;
			break;
		case '-':
			resultado = primeiro - segundo;
			break;
		case '*':
			resultado = primeiro * segundo;
			break;
		case '/':
			resultado = primeiro / segundo;
			break;
	}
	printf("Resultado: %.2f\n", resultado);
}
