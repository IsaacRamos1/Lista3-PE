#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
//Meia Vida de um elemento A;

int main(){
	float t, mi, x;
	int i;
	printf("Digite a massa inicial, em gramas: ");
	scanf("%f", &mi);
	
	for(i = 1;;i++){
		
		x = mi/pow(2, i);
		mi = mi - x;
		printf("------\n%f\n------", mi);
		Sleep(1000);
		
		if(x <= 0.5){
			t = 50 * x; //quantidades de meias vidas que passou e 50s = 1 meia-vida;
			printf("O tempo de dacimento eh de: %f", t);
			break;
		}
	}
	
		
	return 0;
}