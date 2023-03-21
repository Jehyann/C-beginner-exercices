// Exercice 7 : Mini Calculatrice
// Dans cet exercice, nous allons faire un programme qui permet de calculer les quatre opérations
// arithmétiques. Par exemple, l’utilisateur va rentrer l’opération 2+3 et vous lui donnerez le résultat
// c’est-à-dire 5.
#include <stdio.h>
#include <math.h>

int main (){

    //declare variable
    char opt;
    int n1, n2;
    float res;

    // get operation
    printf("Choose an operator (+,-,*,/) : \n");
    scanf("%c", &opt);

    // get n1
    printf("Choose your first number : \n");
    scanf("%d", &n1);

    // get n2
    printf("Choose your second number : \n");
    scanf("%d", &n2);

    switch(opt){
        case '+':
        res = n1 + n2;
        printf (" \n The result of %d %c %d is %.2f.", n1, opt, n2, res);
        break;

        case '-':
        res = n1 + n2;
        printf (" \n The result of %d %c %d is %.2f.", n1, opt, n2, res);
        break;

        case '*':
        res = n1 * n2;
        printf (" \n The result of %d %c %d is %.2f.", n1, opt, n2, res);
        break;

        case '/':
        if (n2 == 0){ 
            //if divisor = 0, ask an another divisor
            printf (" \nDivisor cannot be zero. Please enter another value :");  
            scanf ("%d", &n2);
        }
        res = n1 / n2;
        printf (" \nThe result of %d %c %d is %.2f.", n1, opt, n2, res);
        break;

        default :
        printf("You enter a wrong operator");
    }

    return 0;
}