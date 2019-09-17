#include <stdio.h>

int main(){
	float a, b, result;
	int op;

	printf("Digite a operacao:\n[1]-Soma\n[2]-Subtrair\n[3]-Multiplicar\n[4]-Dividir\n[5]- Sair\n ");
	scanf("%d", &op);
	
	if(op < 1 || op > 5){
		printf("Digite uma opcao valida!!");
		return 0;
	}else if(op == 5){
		printf("Voce saiu.");
		return 0;	
	}
	
	printf("Digite o numero a: ");
	scanf("%f", &a);
			
	printf("Digite o numero b: ");
	scanf("%f", &b);
	
	switch(op){
		case 1:
			result = a + b;
			printf("Resultado = %.2f", result);
		break;
		case 2:
			result = a - b;
			printf("Resultado = %.2f", result);
    	break;
		case 3:
			result = a * b;
			printf("Resultado = %.2f", result);
		break;	
		case 4:
			result = a / b;
			printf("Resultado = %.2f", result);
		break;
		case 5:
			break;
		default:
			printf("Operacao Invalida!!");
		break;
	
}return 0;
}