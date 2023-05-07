CC := gcc
AR := ar
RM := find . -type f -name

EXE := trabajoFinal.elf
SRC :=  $(wildcard libs/EasyPIO/*.c) \
		$(wildcard libs/tf/*.c) \
      	$(wildcard *.c)
OBJ := $(SRC:.c=.o)

CFLAGS  := -c -g -Wall -Werror -Ilibs/EasyPIO -Ilibs/tf
ARFLAGS := -rcs
LDFLAGS := -g -L. -nostartfiles 
LDLIBS  := -ltf -lwiringPi -lm

.PHONY: clean

all: $(EXE)

trabajoFinal.elf: $(OBJ) libtf.a
	$(CC) -o $@ $< $(LDFLAGS) $(LDLIBS)

libtf.a: $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

clean:
	$(RM) '*.o' -delete
	$(RM) '*.a' -delete
	$(RM) '*.elf' -delete