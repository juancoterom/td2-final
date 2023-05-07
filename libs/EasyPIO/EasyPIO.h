#ifndef __EasyPIO__
#define __EasyPIO__


void pioInit(void);
void pinMode(int pin, int function);
void digitalWrite(int pin, int val);
int digitalRead(int pin);


#endif
