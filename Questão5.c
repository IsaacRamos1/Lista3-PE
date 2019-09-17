#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota, soma = 0. media;
	int quant, i;
	
	printf("Digite a quantidade de alunos na turma: \n");
	scanf("%d", &quant);
	
	
	for(i = 1; i <= quant; i++){
		printf("Nota do aluno %d: ", i);
		scanf("%f", &nota);
		if((nota >= 0) && (nota <= 10)){
		soma = soma + nota;
		}else{ return 0;}
	}
	media = soma/quant;
	printf("Media da turma: %.2f", media);
	return 0;
}