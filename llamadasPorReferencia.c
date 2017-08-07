#include <stdio.h>
//int cubo(int n);
void cubo (int *n);
int main(){

int num = 5;
num = cubo(num);
	

	return 0;

}

/*
int cubo(int n)
{
return n*n*n;
}*/

int cubo(int *n)
{
return *n * *n * *n;
}