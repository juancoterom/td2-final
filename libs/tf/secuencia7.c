#include "tf.h"


void secuencia7(void)
{
	int j = 0;

	pioInit();
	system("clear");
	printf(
		"-------------------------------------\n"
		"Secuencia 7.\n"
		"Presionar los dos botones para salir.\n"
		"-------------------------------------\n"
	);

	while(!j)
	{
		for(int i = 0; i < 3; i++)
			digitalWrite(led[i], 1);

		j = count();

		if(j)
			break;

		for(int i = 0; i < 3; i++)
			digitalWrite(led[i], 0);

		for(int i = 3; i < 6; i++)
			digitalWrite(led[i], 1);

		j = count();

		if(j)
			break;

		for(int i = 3; i < 6; i++)
			digitalWrite(led[i], 0);

		for(int i = 6; i < 8; i++)
			digitalWrite(led[i], 1);

		j = count();

		if(j)
			break;

		for(int i = 6; i < 8; i++)
			digitalWrite(led[i], 0);

		j = count();

		if(j)
			break;
	}

	return;
}