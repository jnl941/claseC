CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
SRC = src/VecinosColoreadosPR.c src/OperacionesMatricesPR.c src/PolucionPR.c
OBJ = $(SRC:.c=.o)
EXEC = bin/practice

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean