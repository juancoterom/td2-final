#include "tf.h"


void secuencia5(void)
{
	int c, j = 0;
	int matrix[] = { 
		01111111,
		00111111,
		00011111,
		00001111,
		00000111,
		10000011,
		11000001,
		11100000,
		11110000,
		11111000,
		11111100,
		11111110
	};

	system("clear");
	printf(
		"-------------------------------------\n"
		"Secuencia 5.\n"
		"Presionar los dos botones para salir.\n"
		"-------------------------------------\n"
	);

	while(!j)
	{
		for(int k = 0; k < 12; k++)
		{
			for(int i = 0; i < 8; i++)
			{
				c = pow(2, i);
				digitalWrite(led[i], matrix[k] & c);
			}

			j = count();

			if(j)
				break;
		}
	}

	return;
}