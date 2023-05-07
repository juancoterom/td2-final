#include "tf.h"


void laApilada(void)
{
	int k = 0;

	while(!k)
	{
		for(int i = 7; i > -1; i--)
		{
			for(int j = 0; j <= i; j++)
			{
				digitalWrite(led[j], 1);
				k = count();
				
				if(k)
					break;

				digitalWrite(led[j], 0);
			}

			if(k)
				break;

			digitalWrite(led[i], 1);

			for(int j = 0; j < i; j++)
				digitalWrite(led[j], 0);
		}
	}

	return;
}