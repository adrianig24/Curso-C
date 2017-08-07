#include <stdio.h>

int main(){

	int num1;
	int num2;
	int result;

	printf("primer valor\n");
	scanf("%d", &num1);

	printf("segundo valor\n");
	scanf("%d", &num2);

	result = num1+num2;
	printf("resultado: %d\n",result);
	return 0;
}