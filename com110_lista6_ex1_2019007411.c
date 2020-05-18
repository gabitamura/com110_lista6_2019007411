#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num[7];
	int i=0;
	int j=0;
	int aux;
	
	for(i=0;i<8;i++){
		num[i]=0;
		printf("digite numero %d: ", i+1);
		scanf("%d", &num[i]);	
	}
	printf("\n");
	printf("\n");
	for(i=0; i<8; i++){
		for(j=i+1; j<8; j++){
			if (num[i] > num[j]){
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	printf("vetor[%d] = %d\n", i, num[i]);
	}
system("pause");
}
