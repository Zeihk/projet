myexec : main.o
	gcc -o myexec main.o
	@echo : "Création des liens"
main.o : main.c
	gcc -c main.c -lm -lfftw3
	@echo : "Compilation de main"

# test de connection avec github
