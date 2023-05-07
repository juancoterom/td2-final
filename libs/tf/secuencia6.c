#include "tf.h"


void secuencia6(void)
{
	int c, j = 0;
	int matrix[] = { 
		00000111,
		10000011,
		11000001,
		11100000,
		01110000,
		00111000,
		00011100,
		00001110,
		00000111,
		10000011,
		11000001,
		11100000
	};

	system("clear");
	printf(
		"-------------------------------------\n"
		"Secuencia 6.\n"
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