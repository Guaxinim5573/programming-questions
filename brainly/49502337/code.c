#include <stdio.h>

int main() {
	float nota;
	printf("Digite sua nota: ");
	while(fscanf(stdin, "%f",&nota)==1) {break;}
	
	if(nota > 10) {
		printf("Nota inválida.\n");
	} else if(nota >= 7) {
		printf("Passou direto com nota %.2f\n", nota);
	} else if(nota >= 4) {
		printf("Tem direito de fazer uma prova de recuperação a nota %.2f\n", nota);
	} else {
		printf("Reprovado direto com nota %.2f\n", nota);
	}
	return 0;
}
