#include <stdio.h>

int main() {
	int distancia, bandeira;
	printf("Informe a distância percorrida em quilômetros: ");
	while(fscanf(stdin, "%d", &distancia)==1) {break;}
	printf("Informe o tipo de bandeira da corrida (1 ou 2): ");
	while(fscanf(stdin, "%d", &bandeira)) {
		if(bandeira != 1 && bandeira != 2) {
			printf("Bandeira inválida.\nInforme o tipo de bandeira da corrida (1 ou 2): ");
		} else {
			break;
		}
	}
	printf("a\n");
}
