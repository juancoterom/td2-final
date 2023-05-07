#include "tf.h"


void shutDown(void)
{
	for(int i = 0; i < 8; i++)
		digitalWrite(led[i], 0);

	return;
}