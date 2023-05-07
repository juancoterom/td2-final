#include "tf.h"


void secuencia8(void)
{
	int j = 0;

	system("clear");
	printf(
		"-------------------------------------\n"
		"Secuencia 8.\n"
		"Presionar los dos botones para salir.\n"
		"-------------------------------------\n"
	);

	while(!j)
	{
		for(int k = 0; k < 4; k++)
		{
			for(int i = 0; i < 2; i++)
				digitalWrite(led[i], 1);

			j = count();

			if(j)
				break;

			for(int i = 0; i < 2; i++)
				digitalWrite(led[i], 0);

			for(int i = 2; i < 4; i++)
				digitalWrite(led[i], 1);

			j = count();

			if(j)
				break;

			for(int i = 2; i < 4; i++)
				digitalWrite(led[i], 0);

			for(int i = 4; i < 6; i++)
				digitalWrite(led[i], 1);

			j = count();

			if(j)
				break;

			for(int i = 4; i < 6; i++)
				digitalWrite(led[i], 0);

			for(int i = 6; i < 8; i++)
				digitalWrite(led[i], 1);

			j = count();

			if(j)
				break;

			for(int i = 6; i < 8; i++)
				digitalWrite(led[i], 0);
		}

		for(int k = 0; k < 4; k++)
		{
			j = count();
		
			if(j)
				break;

			for(int i = 0; i < 8; i++)
				digitalWrite(led[i], 1);

			j = count();

			if(j)
				break;

			for(int i = 0; i < 8; i++)
				digitalWrite(led[i], 0);

			j = count();

			if(j)
				break;
		}
	}

	return;
}