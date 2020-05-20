#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char alfabeto[25] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char palavra[25];
	char nova[25];
	int i=0, j=0, n;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("\nInsira nivel de criptografia: ");
	scanf("%d", &n);
	
	for(i=0; i<25; i++){
		j=0;
		while(j<26 && palavra[i] != alfabeto[j]){
			j++;
		}
		
		nova[i] = alfabeto[j+n];
	}
	
	printf("\nPalavra criptografada: %s \n", nova);
	
return 0;	
}
