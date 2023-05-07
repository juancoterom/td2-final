#include "tf.h"


void serialCom1(void)
{
	int str, rts;

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
			"---------------------------------\n"
		);

		scanf("%d", &str);
		serialPutchar(serialPort, (char) str);

		do
		{
			system("clear");

			switch(str)
			{
				case 1:
				printf("Auto Fantastico.\n");
				rts = send();
				break;

				case 2:
				printf("La Carrera.\n");
				rts = send();
				break;

				case 3:
				printf("La Apilada.\n");
				rts = send();
				break;

				case 4:
				printf("El Choque.\n");
				rts = send();
				break;

				case 5:
				printf("Secuencia 5.\n");
				rts = send();
				break;

				case 6:
				printf("Secuencia 6.\n");
				rts = send();
				break;

				case 7:
				printf("Secuencia 7.\n");
				rts = send();
				break;

				case 8:
				printf("Secuencia 8.\n");
				rts = send();
				break;

				case 9:
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
				rts = 3;
				break;
			}
		} while(rts != 3);
	}
}