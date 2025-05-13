CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = src/PrimitivaVectorPR.c src/DerivadaPolinomioPR.c src/ContarDuplicadosPR.c src/AnalisisDatosPR.c
OBJ = $(SRC:.c=.o)
EXEC = bin/practice_exercise

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean