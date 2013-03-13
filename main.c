#include <stdio.h>
#include<math.h>

//Programme principal : test 2 pour vérifier la conncetion avec github

int main(){

FILE *fichier=NULL;
fichier = fopen ("../sons/tele2.wav","r");

if (fichier == NULL)  
        printf ("Erreur a l'ouverture du fichier\n");  
    else {  
        printf ("Fichier bien ouvert !\n");  
        fclose(fichier);  
    }  

printf("Hello World \n");

int a;
a= sqrt(4);
printf("a=%d \n", a);
return 0;
}


//Utilisation de fopen pour ouvrir un fichier wav ==>data
//FILE * f = fopen("wav_file.wav", "r");
