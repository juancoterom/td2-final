#include "tf.h"


int send(void)
{
	int data;
	
	while(1)
	{
		printf(
			"----------------------\n"
			"Secuencia ejecutandose\n" 
			"en otro dispositivo...\n"
			"----------------------\n"
			"1. Subir velocidad.\n"
			"2. Bajar velocidad.\n"
			"3. Volver.\n"
			"----------------------\n"
		);
		
		scanf("%d", &data);
		
		if(data == 1 || data == 2 || data == 3)
		{
			serialPutchar(serialPort, (char) data);
			return data;
			break;
		}

		else
		{	
			system("clear");
			printf(
				"--------------------------\n"
				"ERROR: Seleccion invalida.\n"
				"--------------------------\n"
			);
			delay(1000);
			system("clear");
		}
	}
}