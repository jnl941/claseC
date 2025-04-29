CC = gcc
CFLAGS = -Wall -Wextra -I src/common
SRC_DIR = src
BIN_DIR = bin
OBJ = $(BIN_DIR)/menu.o $(BIN_DIR)/menu_dos_numeros.o $(BIN_DIR)/menu_fechas.o $(BIN_DIR)/circunferencia.o $(BIN_DIR)/utils.o
EXEC = $(BIN_DIR)/menu $(BIN_DIR)/menu_dos_numeros $(BIN_DIR)/menu_fechas $(BIN_DIR)/circunferencia

all: $(EXEC)

$(BIN_DIR)/menu: $(BIN_DIR)/menu.o $(BIN_DIR)/utils.o
	$(CC) -o $@ $^

$(BIN_DIR)/menu_dos_numeros: $(BIN_DIR)/menu_dos_numeros.o $(BIN_DIR)/utils.o
	$(CC) -o $@ $^

$(BIN_DIR)/menu_fechas: $(BIN_DIR)/menu_fechas.o $(BIN_DIR)/utils.o
	$(CC) -o $@ $^

$(BIN_DIR)/circunferencia: $(BIN_DIR)/circunferencia.o $(BIN_DIR)/utils.o
	$(CC) -o $@ $^

$(BIN_DIR)/%.o: $(SRC_DIR)/ejercicio0/menu.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/ejercicio1/menu_dos_numeros.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/ejercicio2/menu_fechas.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/ejercicio3/circunferencia.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/common/utils.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(BIN_DIR)/*.o $(EXEC)

.PHONY: all clean