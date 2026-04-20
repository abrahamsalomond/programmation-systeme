#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

#define TAILLE_MAX 1024


int main(void){
    char ligne[TAILLE_MAX];
    printf("myshell> ");
    fgets(ligne, TAILLE_MAX, stdin);
    printf("%s\n", ligne);
    return 0;


}