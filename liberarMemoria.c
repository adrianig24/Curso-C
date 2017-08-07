#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 2;
int size;
struct dog
{
	char name[20];
	char *p_name;
	
}dogs[length];


int main(){

	for (int i = 0; i < length; ++i)
	{
		printf("nombre\n");
		scanf("%s", dogs[i].name);
		//gets( dogs[i].name);
		//fgets("%s", dogs[i].name,20,stdin);
		size = strlen(dogs[i].name);
		printf("%i", size);
		dogs[i].p_name = malloc(size*sizeof(char);

			if (dogs[i].p_name == null)
			{
				printf("error\n");
			}else{

				strcpy(dogs[i].p_name,dogs[i].name);
				free(dogs->p_name);
			}

	
	for (int i = 0; i < length; ++i)
	{
		printf("el nombre es\n",dogs[i].p_name);
	}

	return 0;
}
