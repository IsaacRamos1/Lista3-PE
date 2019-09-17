#include <stdio.h>
#include <stdlib.h>
//MMC

int main(){
	int x, y, mmc, aux, i;
	
	printf("Digite com que frequencia dispara o alarme 1 (em horas):\n");
	scanf("%d", &x);
	
	printf("Digite com que frequencia dispara o alarme 2 (em horas):\n");
	scanf("%d", &y);
	
	if(y > x){
		aux = x;
		x = y;
		y = aux;
	}
	if(x%y == 0){
		mmc = x;
		
	}else{
		for (i=2;i<=y;i++){
         aux=x*i;
         if ((aux%y)==0)
         {
            mmc=aux;
            i=y+1;
         }
      }
	}
	
	printf("\nO tempo necessario para tocarem juntos de: %d\n\n", mmc);
	return 0;
}