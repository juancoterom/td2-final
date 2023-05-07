#include "tf.h"


int count(void)
{
	int i = 0, j = 0;
	char data;

	for(int c = 0; c < counter; c++)
	{
		if(digitalRead(push[0]) && digitalRead(push[1]))
		{
			shutDown();
			return 1;
		}

		if(digitalRead(push[0]) && i < 1)
		{
			counter += 25000;
			i++;
		}

		if(digitalRead(push[1]) && j < 1 && counter > 45000)
		{
			counter -= 25000;
			j++;
		}

		data = 't';

		if(serialDataAvail(serialPort))
			data = serialGetchar(serialPort);

		if(data == '3')
		{
			shutDown();
			return 1;
		}

		if(data == '2' && i < 1)
		{
			counter += 25000;
			i++;
		}

		if(data == '1' && j < 1 && counter > 45000)
		{
			counter -= 25000;
			j++;
		}
	}

	return 0;
}