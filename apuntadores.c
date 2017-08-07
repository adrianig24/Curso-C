#include <stdio.h>

int main(){

	int a = 2;
	int *apt = &a;
	
printf("%i\n",*apt );//2
printf("%i\n",apt );// direccion memoria
	return 0;

}