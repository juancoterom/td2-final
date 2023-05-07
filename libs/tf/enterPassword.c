#include "tf.h"


#define ENTER 10
#define MAX_LENGTH 5


void enterPassword(char *password)
{
	char key = 0;
	
	system("clear");
	printf(
		"----------------------------\n"
		"Ingresar clave de 5 digitos: "
	);

	for(int i = 0; i < MAX_LENGTH; i++)
	{
		key = getchar();
		*(password + i) = key;
		printf("*");
	}

	while(key != ENTER)
		key = getchar();

	printf("\n");

	return;
}