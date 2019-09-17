#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//VALOR DE PI

int main(){
	float pi, soma = 0, E, ac; // E = somatorium , ac = acumulador
	int n, i; 
	
	printf("Informe a quantidade de termos do somatorium: \n");
	scanf("%d", &n);
	
	for(i = 0; i <= n-1; i++){
		soma = soma + (pow(-1, i)/(2*i +1));
	}
	pi = 4 * soma;
	printf("\nPi, com %d casas deciamais, eh aproximadamente %f", n, pi);
	
	return 0;
}