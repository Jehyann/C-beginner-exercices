// Exercice 1 : identificateur
// Faire un programme qui demande à l’utilisateur son âge et son nom de famille. Puis, afficher le
// résultat en console.


#include <stdio.h>

int main (){

    // declare variables
    int age = 0;
    char name[50];

    // asking for age and name
    printf("Your age? \n");
    scanf("%d", &age);
    printf("What is your name ? \n");
    scanf("%s", name);

    // print info
    printf("Hello %s, your age is %d.", name, age);
   
    return 0;
}