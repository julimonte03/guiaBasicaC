CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = mensajeSecreto

$(TARGET): mensajeSecreto.o
	$(CC) $(CFLAGS) -o $(TARGET) mensajeSecreto.o

mensajeSecreto.o: mensajeSecreto.c
	$(CC) $(CFLAGS) -c mensajeSecreto.c -o mensajeSecreto.o

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
