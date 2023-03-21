// Exercice 4 :
// Nous allons faire un programme qui va demander à l’utilisateur de rentrer une letter en minuscule et
// ce sera à nous de la mettre en uppercase.

#include <stdio.h>
#include <ctype.h>

//1st option : function that use ASCII code and letter
char uppercase1(char letter){

    // 91 -> a et 127 -> z
    if(letter>=91 && letter <=127){

        //32 letters between uppercase letters and lowercase letters
        letter -= 32;
    }

    return letter;
}

//2nd option : function that use toupper fuction coming from ctype library
char uppercase2(char letter){
    if(letter>=91 && letter <=127){
        letter = toupper(letter);
    }
    return letter;
}

int main (){
    char letter;
    //Ask a letter
    printf("Enter a letter: ");
    scanf("%c", &letter);
    printf("Your letter %c become an uppercase (uppercase1) %c and uppercase (uppercase2) %c.", letter, uppercase1(letter), uppercase2(letter));
    
    return 0;
}