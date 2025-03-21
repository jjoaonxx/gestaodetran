#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idade;
char nome[50];
char exame[70];

int main(){
	printf("Digite seu nome\n");
	scanf("%s", &nome);
	
	printf("Informe sua idade\n");
	scanf("%i", &idade);
	
	printf("Informe se passou no exame:\n");
	scanf("%s", &exame);
	
	if (idade>=18 && idade<=95 && strcmp(exame, "APROVADO") == 0) {
			printf("Voce pode possuir carteira de motorista %s:\n", nome);
	} else {
			printf("Voce nao pode possuir carteira de motorista %s:\n", nome);
	}
}