#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

#define TAILLE_MAX 1024


int main(void){
    char ligne[TAILLE_MAX];

    while(1){
        printf("myshell> ");
        fgets(ligne, TAILLE_MAX, stdin);
        if(strcmp(ligne, "exit\n")==0|| strcmp(ligne, "quit\n")==0)
        break;
        printf("%s\n", ligne);
    }
    return 0;
}