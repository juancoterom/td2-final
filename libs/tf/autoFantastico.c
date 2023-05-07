#include "tf.h"


void autoFantastico(void)
{
	int matrix[15][8] = {
		{1, 0, 0, 0, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 1, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 1, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 1, 0, 0},
		{0, 0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 0},
		{0, 0, 1, 0, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0},
		{1, 0, 0, 0, 0, 0, 0, 0}
	};

	int k = 0;

	system("clear");
	printf(
		"-------------------------------------\n"
		"Secuencia: Auto Fantastico.\n"
		"Presionar los dos botones para salir.\n"
		"-------------------------------------\n"
	);

	while(!k)
	{
		for(int i = 0; i < 15; i++)
		{
			k = count();

			if(k)
				break;

			for(int j = 0; j < 8; j++)
			{
				digitalWrite(led[j], matrix[i][j]);

				if(k)
					break;
			}

			if(k)
				break;
		}
		
		if(k)
			break;
	}

	return;
}