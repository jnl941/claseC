CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = -lm
BINDIR = bin
SRCDIR = src
TESTDIR = tests

# Asegurarse de que el directorio bin existe
$(shell mkdir -p $(BINDIR))

# Programas
EXERCISES = CalcularMasaBolaModularPR LeerRealIntervaloPR PasarPolaresPR TablaPotenciasPR EsBisiestoPR AckermannPR
TARGETS = $(addprefix $(BINDIR)/, $(EXERCISES))

# Compilar  los programas
all: $(TARGETS)

# Reglas para cada ejercicio - tratar los archivos .o como archivos fuente C con -x c
$(BINDIR)/CalcularMasaBolaModularPR: $(SRCDIR)/CalcularMasaBolaModularPR.c $(TESTDIR)/CalcularMasaBolaModularPRTEST.o
	$(CC) $(CFLAGS) $< -x c $(TESTDIR)/CalcularMasaBolaModularPRTEST.o -o $@ $(LDFLAGS)

$(BINDIR)/LeerRealIntervaloPR: $(SRCDIR)/LeerRealIntervaloPR.c $(TESTDIR)/LeerRealIntervaloPRTEST.o
	$(CC) $(CFLAGS) $< -x c $(TESTDIR)/LeerRealIntervaloPRTEST.o -o $@ $(LDFLAGS)

$(BINDIR)/PasarPolaresPR: $(SRCDIR)/PasarPolaresPR.c $(TESTDIR)/PasarPolaresPRTEST.o
	$(CC) $(CFLAGS) $< -x c $(TESTDIR)/PasarPolaresPRTEST.o -o $@ $(LDFLAGS)

$(BINDIR)/TablaPotenciasPR: $(SRCDIR)/TablaPotenciasPR.c $(TESTDIR)/TablaPotenciasPRTEST.o
	$(CC) $(CFLAGS) $< -x c $(TESTDIR)/TablaPotenciasPRTEST.o -o $@ $(LDFLAGS)

$(BINDIR)/EsBisiestoPR: $(SRCDIR)/EsBisiestoPR.c $(TESTDIR)/EsBisiestoPRTEST.o
	$(CC) $(CFLAGS) $< -x c $(TESTDIR)/EsBisiestoPRTEST.o -o $@ $(LDFLAGS)

$(BINDIR)/AckermannPR: $(SRCDIR)/AckermannPR.c $(TESTDIR)/AckermannPRTEST.o
	$(CC) $(CFLAGS) $< -x c $(TESTDIR)/AckermannPRTEST.o -o $@ $(LDFLAGS)

# Atajos para cada ejercicio
masa: $(BINDIR)/CalcularMasaBolaModularPR
leer: $(BINDIR)/LeerRealIntervaloPR
polares: $(BINDIR)/PasarPolaresPR
tabla: $(BINDIR)/TablaPotenciasPR
bisiesto: $(BINDIR)/EsBisiestoPR
ackermann: $(BINDIR)/AckermannPR

# Atajos de testeo para cada ejercicio
test-masa: $(BINDIR)/CalcularMasaBolaModularPR
	$< test
test-leer: $(BINDIR)/LeerRealIntervaloPR
	$< test
test-polares: $(BINDIR)/PasarPolaresPR
	$< test
test-tabla: $(BINDIR)/TablaPotenciasPR
	$< test
test-bisiesto: $(BINDIR)/EsBisiestoPR
	$< test
test-ackermann: $(BINDIR)/AckermannPR
	$< test

# Ejecutar pruebas para un ejercicio específico
# test-%: $(BINDIR)/%
# 	$< test

# Ejecutar todas las pruebas
test: $(TARGETS)
	for exe in $(TARGETS); do $$exe test; done

# Limpiar bin
clean:
	rm -rf $(BINDIR)/*
