#include <stdio.h>
#include <stdlib.h>
//Numeros Perfeitos

int main(){
	int a, i, soma = 0, n;
		
	printf("Digite o numero desejado: \n");
	scanf("%d", &n);
	
	for(i = 1; i < n; i++){
		a = n % i;
		if(a == 0){
			soma = soma + i;
		}
	}
		if(soma == n){
			printf("Eh perfeito!!");
		}else
		{
			printf("Nao eh perfeito!!");
		}
	return 0;
}