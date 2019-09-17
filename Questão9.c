#include <stdio.h>
#include <stdlib.h>
//N numeros, dizer posidivos e média

int main(){
	int n, i, cont = 0;
	float soma = 0, num, media;
	
	printf("Digite a quantidade de numeros que ira digitar: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		printf("Digite o numero %d: ", i);
		scanf("%f", &num);	
		if(num > 0){
			cont++;
			soma += num;
		}		
	}
	media = soma/cont;
	
	printf("\n%d Numeros positivos", cont);
	printf("\nMedia = %.2f", media);
	
	return 0;
}