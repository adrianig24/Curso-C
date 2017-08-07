#include <stdio.h>

int main(){

int edad;
printf("ingresa la edad");
scanf("%d" , &edad);
if(edad >= 18){
	printf("eres mayor de edad");
}else{
	printf("eres menor de edad");

}