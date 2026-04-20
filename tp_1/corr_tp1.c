#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

#define TAILLE_MAX 1024


int main(void){
    char ligne[TAILLE_MAX];
    printf("myshell> ");
    if(fgets(ligne, TAILLE_MAX, stdin) == NULL){
        perror("Erreur de lecture de la ligne de commande");
        return 1;}
    printf("Vous avez entré: %s", ligne);
    return 0;


}