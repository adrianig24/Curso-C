#include <stdio.h>

#define length 2
struct dueño
{
	char nombre[30];
	char direccion[30];
}perros[length];

struct perro
{
	char nombre[30];
	int edad;
	struct dueño dueñoPerro;
	{
		
	};
}perros[length];


int main(){

	for (int i = 0; i < length; ++i)
	{
		printf("nombre\n");
		scanf("%s",&perros[i].nombre);

		scanf("%s",&perros[i].dueñoPerro.nombre);
	}
		return 0;
}