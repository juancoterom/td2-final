#include "tf.h"


void setSpeed(void)
{
	const char PCF8591 = 0x48;
	int fd, c = 500000;
	double time, t = 0.85, speed;

	if(wiringPiSetup() == -1)
		exit(1);
	
	system("clear");
	fd = wiringPiI2CSetup(PCF8591);
	wiringPiI2CReadReg8(fd, PCF8591 + 1);

	do
	{
		printf(
			"-----------------------------------------\n"
			"Posicionar potenciometro para seleccionar\n"
		       	"el contador inicial.\n"
			"Pulsar los dos pulsadores para salir.\n"
			"El contador tiene que ser mayor a 150000.\n"
			"-----------------------------------------\n"
		);

		counter = wiringPiI2CReadReg8(fd, PCF8591 + 1) * 4000;
		time = counter * t / c;
		speed = 100 - counter * 100 / 1020000;

		printf("Contador = %d\n", counter);
		printf("Tiempo = %f\n", time);
		printf("Velocidad = %f %%\n", speed);
		
		if(counter < 50000)
			printf(
				"---------------------------\n"
				"Seleccionar otra velocidad.\n"
				"Es menor a la permitida.\n"
				"---------------------------\n"
			);

		delay(200);
		system("clear");
	} while(!digitalRead(push[1]) || !digitalRead(push[0]) || counter < 50000);

	return;
}