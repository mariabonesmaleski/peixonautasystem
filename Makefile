GCC = gcc
LIMPAR = rm
SRC = ./src/
INCLUDE = ./include/
OBJETOS = ./objs/
EXECUTAVEL = peixonautasystem

all: $(SRC)main.c menus.o listas.o
	$(GCC) $(SRC)main.c $(OBJETOS)menus.o $(OBJETOS)listas.o -o $(EXECUTAVEL)

menus.o: $(SRC)menus.c $(INCLUDE)menus.h
	$(GCC) -c $(SRC)menus.c -o $(OBJETOS)menus.o

listas.o: $(SRC)listas.c $(INCLUDE)listas.h
	$(GCC) -c $(SRC)listas.c -o $(OBJETOS)listas.o

remover:
	$(LIMPAR) $(OBJETOS)*