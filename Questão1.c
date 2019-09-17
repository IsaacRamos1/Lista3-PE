#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota, nota1 = 0, nota2 = 0, nota3 = 0;
	int i, n;
	
	printf("Digite a quantidade de notas: \n");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		
	printf("Digite a nota do condidato %d: \n", i);
	scanf("%f", &nota);
	
		if(nota >= nota1){
			nota3 = nota2;
			nota2 = nota1;
			nota1 = nota;
		}
		if(nota >= nota2 && nota < nota1){
			nota3 = nota2;
			nota2 = nota;
		}
		if(nota >= nota3 && nota < nota2){
			nota3 = nota;
		}
	}
	printf("\nAs tres primeiras notas sao: \n%.2f\n%.2f\n%.2f", nota1, nota2, nota3);;
	return 0;
}