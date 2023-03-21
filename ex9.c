// Exercice 9 : Code PIN
// Dans cet exercice, nous allons demander de rentrer un code pin à 4 chiffres comme dans un
// téléphone, si le code est bon, vous affichez “Téléphone déverrouillé”. Mais si le code n’est pas bon
// l’utilisateur n’aura droit qu’à 3 essais sinon le téléphone se verrouille.

#include <stdio.h>


float askDigit(float enterPin, int tries) {
        printf("Please enter your PIN to continue. You have %d tries: ", tries);
        scanf("%f", &enterPin);
    return tries;
}

int main (){

    int pin = 1234;
    int tries = 3;
    float enterPin;

    

    while (tries >= 3) {
        askDigit(enterPin, tries);
        if (pin == enterPin) {
            printf("You entered the right PIN code.");
        }

        if (pin != enterPin) {
            tries = tries - 1;
            printf("You entered the wrong PIN code, please try again.\n");
            askDigit(enterPin, tries);
        }
        if (tries == 0) {
        printf("You used your 3 tries, you can't try anymore.");
        break;
        }
    }
    
    

    return 0;
}