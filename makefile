CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = ej14

$(TARGET): ej14.o
	$(CC) $(CFLAGS) -o $(TARGET) ej14.o

ej14.o: ej14.c
	$(CC) $(CFLAGS) -c ej14.c -o ej14.o

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
