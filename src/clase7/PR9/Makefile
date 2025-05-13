CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -g
SRC = src/RegistroTiemposPR.c src/FigurasPR.c src/ListaFigurasPR.c
OBJ = $(SRC:.c=.o)
BIN = bin/RegistroTiemposPR bin/FigurasPR bin/ListaFigurasPR

all: $(BIN)

bin/RegistroTiemposPR: src/RegistroTiemposPR.o
	$(CC) -o $@ $< $(CFLAGS)

bin/FigurasPR: src/FigurasPR.o
	$(CC) -o $@ $< $(CFLAGS)

bin/ListaFigurasPR: src/ListaFigurasPR.o
	$(CC) -o $@ $< $(CFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(BIN)

.PHONY: all clean