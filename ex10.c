// Exercice 10 : Nombre premier
// Faite un programme qui demande à l’utilisateur de rentrer un nombre et votre programme dira si ce
// nombre est premier. (Pour rappel : un nombre premier est un nombre qui n’est divisible que par 1
// et lui-même.).

#include <stdio.h>


int main (){
    
    int n, i;
    printf("\nPlease enter your choosen number (more than 1) : ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("Please enter a correct number.");
    };

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0)
            printf("This is not a prime number.");
        else
            printf("This is a prime number.");
    };

    return 0;
}