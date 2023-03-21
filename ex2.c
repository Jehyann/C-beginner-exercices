// Exercice 2 : ASCII
// Réaliser un programme qui affiche le code ASCII en décimal et hexadécimal d’une lettre entrée par
// l’utilisateur.


#include <stdio.h>


int main (){

    // initializing variables
    char letter;

    // getting the letter/character
    printf("Give me a letter :");  
    scanf("%c",&letter);

    // printing 
    printf("\n  The decimal code of the letter is : %d\n  The HEX code of the letter is : %x", letter, letter);  
    return 0;  

}