#ifndef __tf__
#define __tf__


#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <wiringPiI2C.h>
#include "EasyPIO.h"


void password(void);
void enterPassword(char*);
int  isPassword(char*, char*);
void ioConfig(void);
void autoFantastico(void);
void laCarrera(void);
void laApilada(void);
void elChoque(void);
void secuencia5(void);
void secuencia6(void);
void secuencia7(void);
void secuencia8(void);
void serialCom1(void);
void serialCom2(void);
int  count(void);
int  send(void);
void setSpeed(void);
void shutDown(void);


extern int led[], push[], sw[], counter, serialPort;


#endif