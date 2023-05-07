#include "tf.h"


#define INPUT 0
#define OUTPUT 1


void ioConfig(void)
{
	for(int i = 0; i < 8; i++)
		pinMode(led[i], OUTPUT);

	for(int i = 0; i < 2; i++)
		pinMode(push[i], INPUT);

	for(int i = 0; i < 4; i++)
		pinMode(sw[i], INPUT);

	return;
}