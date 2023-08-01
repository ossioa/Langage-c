#include <stdio.h>
 
int main (){

    int nombreEntier ;
    float nombreDecimal = 43.56;
    char  caractere ;

    nombreEntier = 32;
    caractere = 'a';

    printf("Bienvenue dans notre programme en c ! \n"); 
    printf("un entier =>%d\n" , nombreEntier);
    printf("un decimal =>%f\n" , nombreDecimal);
    printf("un caractere =>%c\n" , caractere);
    
    printf("Le caractere %c a la valeur %d\n", caractere, caractere);


    return 0;
}