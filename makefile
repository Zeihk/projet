myexec : main.o
	gcc -o myexec main.o
	@echo : "Création des liens"
main.o : main.c
	gcc -c main.c
	@echo : "Compilation de main"

# test de connection avec github
