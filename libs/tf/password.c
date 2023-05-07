#include "tf.h"


#define FD_STDIN 0


void password (void)
{
	char password[5], myPass[] = {"juano"};
	int attempt = 1;
	struct termios t_new, t_old;

	tcgetattr(FD_STDIN, &t_old);
	t_new = t_old;
	t_new.c_lflag &= ~(ECHO | ICANON);
	tcsetattr(FD_STDIN, TCSANOW, &t_new);

	while(attempt <= 3)
	{
		enterPassword(password);

		if(isPassword(password, myPass))
		{
			printf(
				"----------------------\n"
				"Bienvenido al sistema.\n"
				"----------------------\n"
			);
			delay(1000);
			tcsetattr(FD_STDIN, TCSANOW, &t_old);
			return;
		}

		else
		{
			printf(
				"-------------------------\n"
				"ERROR: Password invalida.\n"
			    "Intento %d de 3.\n"
				"-------------------------\n", attempt
			);
			delay(1000);
			system("clear");
			attempt++;
		}
	}

	printf(
		"------\n"
		"Adiós!\n"
		"------\n"
	);
	delay(1000);
	system("clear");
	tcsetattr(FD_STDIN, TCSANOW, &t_old);
	exit(0);
}