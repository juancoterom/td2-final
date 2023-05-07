#include "tf.h"


void serialCom2(void)
{
	char str;

	if((serialPort = serialOpen("/dev/ttyS0", 9600)) < 0)
	{
		fprintf(stderr, "ERROR: %s\n", strerror(errno));
		delay(1000);
		return;
	}

	if(wiringPiSetup() == -1)
	{
		fprintf(stdout, "ERROR: %s\n", strerror(errno));
		delay(1000);
		return;
	}

	while(1)
	{
		system("clear");
		printf(
			"----------------------------------\n"
			"Seleccionar la secuencia de luces.\n"
			"----------------------------------\n"
			"1. Auto Fantastico.\n"
			"2. La Carrera.\n"
			"3. La Apilada.\n"
			"4. El Choque.\n"
			"5. Secuencia 5.\n"
			"6. Secuencia 6.\n"
			"7. Secuencia 7.\n"
			"8. Secuencia 8.\n"
			"9. Salir.\n"
			"----------------------------------\n"
			"Recibiendo datos desde otro\n" 
			"dispositivo...\n"
			"----------------------------------\n"
		);

		str = serialGetchar(serialPort);

		switch(str)
		{
			case '1':
			autoFantastico();
			break;

			case '2':
			laCarrera();
			break;

			case '3':
			laApilada();
			break;

			case '4':
			elChoque();
			break;

			case '5':
			secuencia5();
			break;

			case '6':
			secuencia6();
			break;

			case '7':
			secuencia7();
			break;

			case '8':
			secuencia8();
			break;

			case '9':
			return;
			break;

			default:
			system("clear");
			printf(
				"--------------------------\n"
				"ERROR: Seleccion invalida.\n"
				"--------------------------\n"
			);
			delay(1000);
		}
	}
}
