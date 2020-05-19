#include<stdio.h>

int main (){
	
	int dado[19];
	int i=0, dado1=0, dado2=0, dado3=0, dado4=0, dado5=0, dado6=0;
	
	for(i=0; i<20; i++){
		printf("Jogada numero %d dado: ", i+1);
		scanf("%d", &dado[i]);
		if(dado[i] == 1)
			dado1++;
		if(dado[i] == 2)
			dado2++;
		if(dado[i] == 3)
			dado3++;
		if(dado[i] == 4)
			dado4++;
		if(dado[i] == 5)
			dado5++;				
		if(dado[i] == 6)
			dado6++;	
	}
	printf("\nFrequencia dos numeros sorteados nas 20 jogadas: ");
	printf("\nFace 1: %d vezes", dado1);	
	printf("\nFace 2: %d vezes", dado2);
	printf("\nFace 3: %d vezes", dado3);
	printf("\nFace 4: %d vezes", dado4);
	printf("\nFace 5: %d vezes", dado5);
	printf("\nFace 6: %d vezes", dado6);
	
}
