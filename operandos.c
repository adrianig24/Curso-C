#include <stdio.h>

int main(){

	int num1;
	int num2;
	int result;

	int a = 12;

	printf("primer valor\n");
	scanf("%d", &num1);

	printf("segundo valor\n");
	scanf("%d", &num2);
	/*suma*/
	//result = num1+num2;
	/*resta*/
	//result = num1 - num2;
	/*multiplicacion*/
	//result = num1 * num2;
	/*division*/
	//result = num1 / num2;

//*se respeta el orden de los operadores*/
	result = a*(num1+num2) + b*(b+num2);
	printf("resultado: %d\n",result);
	return 0;
}