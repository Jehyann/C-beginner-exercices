// Exercice 6 : Les jours de la semaine
// Dans cet exercice, nous allons demander à l’utilisateur de rentrer un nombre entier entre 1 et 7.
// Chaque nombre entier correspondra à un jour de la semaine. Gérer aussi le cas où l’utilisateur rentre
// un nombre invalide.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    int number;

    printf("\n\n Enter a number between 1 and 7 : ");
    scanf("%d\n",&number);

    switch (number)
    {
        case 1:
            printf("Monday");
        break;

        case 2:
            printf("Tuesday");
        break;

        case 3:
            printf("Wednesday");
        break;

        case 4:
            printf("Thursday");
        break;

        case 5:
            printf("Friday");
        break;

        case 6:
            printf("Saturday");
        break;

        case 7:
            printf("Sunday");
        break;
            
        default:
            printf("Wrong number!");
        break;
        }

    return 0;

}