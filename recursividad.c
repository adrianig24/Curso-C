#include <stdio.h>

int main(){



int numero;
printf("introduzca numero \n");
scanf("%i", &numero)

return 0;
}

long factorial(long numero){

	if (numero <= 1){

		return 1;
	}else{
		return (numero * factorial(numero-1));
	}
}