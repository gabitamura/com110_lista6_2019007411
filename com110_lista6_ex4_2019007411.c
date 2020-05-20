#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main(){

	int x,y,tam;
	char nome[10];

	printf("Digite uma palavra: ");
	gets(nome);
	tam = strlen(nome);
	printf("\nPalavra digitada invertida: ");

	for (x=tam-1; x >= 0; x--)
	printf("%c",nome[x]);

printf("\n\n");
system("pause");
return 0;
}
