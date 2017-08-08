#include <stdio.h>
#include < stdlib.h>
typedef struct nodo{

	char *nombre;
	struct nodo *sig;

}Libro;

Libro *listaLibro(Libro *Lista){
Lista = null;
return Lista;
}

libro *agregarLibro(Libro *Lista, char *nombre){
	libro *nuevoLibro, *aux;
	nuevoLibro = malloc(sizeof(Libro));
	nuevoLibro->nombre = nombre;
	nuevoLibro->sig = null;
	if (Lista == null){
		Lista= nuevoLibro;
	}else{
	aux = Lista;
	while(aux->sig != null){
		aux = aux->sig;
	
		}
			aux->sig = nuevoLibro;
	}
	return Lista;
}

int main(){
	Libro *Lista = listaLibro(Lista);
	Lista = agregarLibro(Lista,"html");
		Lista = agregarLibro(Lista,"css3");
	
while(Lista!=null){
	printf("%s\n", Lista->nombre);
	Lista = Lista->sig;
}
	
	
		return 0;
}