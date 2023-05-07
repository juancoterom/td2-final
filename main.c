/*	 
 *	-------------------------------------- 
 *	UNIVERSIDAD TECNOLÓGICA NACIONAL
 *	FACULTAD REGIONAL CÓRDOBA
 *	DEPARTAMENTO DE INGENIERÍA ELECTRÓNICA
 *	--------------------------------------
 *	TÉCNICAS DIGITALES II
 *	CURSO 4R1 - AÑO 2020
 *	TRABAJO FINAL
 *	-------------------------------------- 
 *	TITULAR:		TOLEDO, LUIS EDUARDO
 *	AYUDANTE 1RA:	PEREYRA, ESTEFANÍA
 *	--------------------------------------
 *	INTEGRANTES					LEGAJO
 *	--------------------------------------
 *	ESPINOSA, MAURO		 	 	69916 
 *	MIRA, MARTÍN GONZALO	 	73313
 *	OTERO, JUAN CRUZ			71459
 *	VON ZIEGLER, DIEGO ROMÁN 	22318
 *	--------------------------------------
 */


#include "tf.h"


int led[8] = {23, 24, 25, 12, 16, 20, 21, 26};
int push[2] = {17, 27};
int sw[4] = {5, 6, 13, 19};
int counter = 250000, serialPort;


int _start()
{
	int s, q;

	password();
	pioInit();
	ioConfig();

	while(1)
	{
		system("clear");
		printf(
			"----------------------------------\n"
			"Seleccionar la secuencia de luces.\n"
			"----------------------------------\n"
			"1.  Auto Fantastico.\n"
			"2.  La Carrera.\n"
			"3.  La Apilada.\n"
			"4.  El Choque.\n"
			"5.  Secuencia 5.\n"
			"6.  Secuencia 6.\n"
			"7.  Secuencia 7.\n"
			"8.  Secuencia 8.\n"
			"9.  Manejo remoto.\n"
			"10. Seteo de velocidad.\n"
			"11. Salir.\n"
			"----------------------------------\n"
		);

		scanf("%d", &s);	

		switch(s)
		{
			case 1:
			autoFantastico();
			break;

			case 2:
			laCarrera();
			break;

			case 3:
			laApilada();
			break;

			case 4:
			elChoque();
			break;

			case 5:
			secuencia5();
			break;

			case 6:
			secuencia6();
			break;

			case 7:
			secuencia7();
			break;

			case 8:
			secuencia8();
			break;

			case 9:
			do
			{
				system("clear");
				printf(
					"-------------------------------\n"
					"1. Manejar otro dispositivo.\n"
					"2. Recibir de otro dispositivo.\n"
					"3. Volver.\n"
					"-------------------------------\n"
				);
				scanf("%d", &q);

				switch(q)
				{
					case 1:
					serialCom1();
					break;

					case 2:
					serialCom2();
					break;

					case 3: 
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
			} while(q != 3);
			break;

			case 10:
			setSpeed();
			break;

			case 11:
			system("clear");
			printf(
				"------\n"
				"Adiós!\n"
				"------\n"
			);
			delay(1000);
			system("clear");
			exit(0);

			default:
			system("clear");
			printf(
				"--------------------------\n"
				"ERROR: Seleccion invalida.\n"
				"--------------------------\n"
			);
			delay(1000);
			break;
		}

		shutDown();
	}
}