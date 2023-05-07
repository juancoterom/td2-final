#include "tf.h"


#define MAX_LENGTH 5


int isPassword(char *password, char *myPass)
{
	for(int i = 0; i < MAX_LENGTH; i++)
		if(*(password + i) != *(myPass + i))
			return 0;

	return 1;
}