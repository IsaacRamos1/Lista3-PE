#include <stdio.h>
#include <stdlib.h>
//Quadrado

int main(){
	int tam, j, i;
	
	printf("Digite o tamanho do quadrado: ");
	scanf("%d", &tam);
	
	for(j = 0; j < tam; j++){
		for(i = 0; i < tam; i++){
		printf("* ");	
		}
		printf("\n");
	}
	
	return 0;
}