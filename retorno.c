#include <stdio.h>


int num3 = 4;
int suma();
int main()
{
	int num1,num2;
	printf("1 valor\n");
	scanf("%i",&num1);


	printf("2 valor\n");
	scanf("%i",&num2);
	return 0;
}

int suma(int num1, int num2){
	
	int suma = num1 + num2;
	return suma;
}