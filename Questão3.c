#include <stdio.h>
#include <stdlib.h>
//Numeros Triangulares

int main(){
	int x, i, soma;
	soma = 0;
	
	printf("\nDigite o numero desejado: \n");
	scanf("%d", &x);

	for(i = 0; soma < x; i++){
		soma = soma + i;		
	}
	if(soma == x){
	   	printf("\nEh triagular!!");	
	}else{
		printf("\nNao Eh triangular!!");	  
	}
	return 0;
	
}

