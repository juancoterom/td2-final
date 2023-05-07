#include "tf.h"


void elChoque(void)
{
	int matrix[7][8] = {
		{1, 0, 0, 0, 0, 0, 0, 1},
		{0, 1, 0, 0, 0, 0, 1, 0},
		{0, 0, 1, 0, 0, 1, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 1, 0, 0, 1, 0, 0},
		{0, 1, 0, 0, 0, 0, 1, 0},
		{1, 0, 0, 0, 0, 0, 0, 1}
	};

	int j = 0;

	system("clear");
	printf(
		"-------------------------------------\n"
		"Secuencia: El Choque.\n"
		"Presionar los dos botones para salir.\n"
		"-------------------------------------\n"
	);

	while(!j)
	{
		for(int i = 0; i < 7; i++)
		{
			j = count();

			if(j)
				break;

			for(int k = 0; k < 8; k++)
			{
				digitalWrite(led[k], matrix[i][k]);

				if(j)
					break;
			}

			if(j)
				break;
		}

		if(j)
			break;
	}

	return;
}