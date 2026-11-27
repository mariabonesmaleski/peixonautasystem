GCC = gcc
LIMPAR = rm
SRC = ./src/
INCLUDE = ./include/
OBJETOS = ./objs/
EXECUTAVEL = peixonautasystem

all: $(SRC)main.c menus.o listas.o utils.o arquivos.o relatorios.o
	$(GCC) $(SRC)main.c \
	$(OBJETOS)menus.o \
	$(OBJETOS)listas.o \
	$(OBJETOS)utils.o \
	$(OBJETOS)arquivos.o \
	$(OBJETOS)relatorios.o \
	-o $(EXECUTAVEL)

menus.o: $(SRC)menus.c $(INCLUDE)menus.h
	$(GCC) -c $(SRC)menus.c -o $(OBJETOS)menus.o

listas.o: $(SRC)listas.c $(INCLUDE)listas.h
	$(GCC) -c $(SRC)listas.c -o $(OBJETOS)listas.o

utils.o: $(SRC)utils.c $(INCLUDE)utils.h
	$(GCC) -c $(SRC)utils.c -o $(OBJETOS)utils.o

arquivos.o: $(SRC)arquivos.c $(INCLUDE)arquivos.h
	$(GCC) -c $(SRC)arquivos.c -o $(OBJETOS)arquivos.o

relatorios.o: $(SRC)relatorios.c $(INCLUDE)relatorios.h
	$(GCC) -c $(SRC)relatorios.c -o $(OBJETOS)relatorios.o

remover:
	$(LIMPAR) $(OBJETOS)*