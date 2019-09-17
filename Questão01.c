#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota, nota1 = 0, nota2 = 0, nota3 = 0;
 	int i, n;
    
 	printf("Digite o numero de candidatos: \n");
 	scanf("%d", &n);
 	
 	for(i = 1; i <= n; i++){
		 printf("Digite a nota do candidato %d: \n", i);
		 scanf("%f", &nota);
		 
		 if(nota > nota1){
		 	nota3 = nota2;
		 	nota2 = nota1;
			nota1 = nota;
			continue;
		 }else if(nota > nota2){
		 		nota1 = nota1;
				nota3 = nota2;
			   	nota2 = nota;
				continue;
			}
		 
	 }
	 printf("Tres maiores notas:\n%.2f \n%.2f \n%.2f", nota1, nota2, nota3);
	return 0;
}