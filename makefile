CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = ej12

$(TARGET): ej12.o
	$(CC) $(CFLAGS) -o $(TARGET) ej12.o

ej12.o: ej12.c
	$(CC) $(CFLAGS) -c ej12.c -o ej12.o

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
