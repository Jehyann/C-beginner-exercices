// Exercice 11 : pierre, feuille, ciseau
// L’objectif de cet exercice est de reproduire le jeu. Notre utilisateur va jouer contre l’ordinateur.
// L'utilisateur devra sélectionner les chiffre 1, 2 ou 3 correspondants à pierre, feuille ou ciseau.
// L’ordinateur devra en faire de même mais le chiffre sera choisi aléatoirement. Vous affichez le
// résultat. A chaque fois qu’il y a un match nul, il faudra recommence jusqu’à ce qu’il y ait un
// vainqueur.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

//Reminder :
// 1 = Rock
// 2 = Paper
// 3 = Scissors

// result = 1 -> player win
// result = -1 -> game draw
// result = 0 -> computer win

 
int game(int player, int computer)
{
    // if p = c
    // game draw
    if (player == computer)
        return -1;
 
    // if p = 1 & c = 2
    // computer win
    if (player == 1 && computer == 2)
        return 0;
 
    // if p = 2 & c = 1
    // player win
    else if (player == 2 && computer == 1) 
        return 1;
 
    // if p = 1 & c = 3
    // player win
    if (player == 1 && computer == 3)
        return 1;
 
    // if p = 3 & c = 1
    // computer win
    else if (player == 3 && computer == 1)
        return 0;
 
    // if p = 1 & c = 3
    // computer win
    if (player == 2 && computer == 3)
        return 0;
 
    // if p = 3 & c = 1
    //player win
    else if (player == 3 && computer == 2)
        return 1;
}


int main()
{
    // random
    int n;

    int player, computer, result;
 
    // choose random
    srand(time(NULL));
    n = rand() % 100;
 
    // probability
    if (n < 33)
        computer = 1;
    else if (n > 33 && n < 66)
        computer = 2;
    else
        computer = 3;

    
    printf("\nEnter 1 for rock, 2 for paper and 3 for scissors\n");
    scanf("%d", &player);


    result = game(player, computer);

    // giving result
    if (result == -1) {
        printf("Game Draw!\n");
        main(); // remake game
    }
    else if (result == 1) {
        printf("Yay! You won! GG!\n");
    }
    else {
        printf("Noooo! You lost the game :(\n");
    }
        printf("Player choose : %d and computer choose : %d\n",player, computer);
}