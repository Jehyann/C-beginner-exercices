// Exercice 8 : Calcul du cosinus par pas.
// Dans ce programme, nous allons demander à l’utilisateur un nombre et nous allons calculer le
// cosinus de zéro jusqu’à ce nombre par pas de 1. Par exemple si l’utilisateur tape 3, le programme
// affichera le cos (0), cos (1), cos (2), cos (3). Évidemment, le nombre sera compris entre 0 et 360.

#include <stdio.h>
#include <math.h>

int main() {

    int n, i;
    float res;

    printf("\nGive a number between 0 and 360 to calculate the cosinus :");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        // attribut la valeur a res
        double res = cos(i);
        printf("\ncos(%d) = %f", i, res);
    };

    return 0;
}
