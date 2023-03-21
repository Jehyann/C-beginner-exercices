// Exercice 5 : Comparateur de nombre
// Dans cet exercice, nous allons demander à l’utilisateur de rentrer deux nombres. Nous allons dire si
// ces deux nombres sont égaux ou non. S'ils sont différents, dite qui est supérieur ou inférieur et
// l’écart entre les deux nombres.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int n1;
    int n2;

    printf("\n\n Enter your first number : ");
    scanf("%d",&n1);

    printf("\n\n Enter the second number : ");
    scanf("%d",&n2);

    if (n1 < n2) {
        int res = n2 - n1;
        printf("\t\tThe second number (%d) is bigger, there is a difference of %d.\n",n2,res);
    }
    else if (n1 > n2){
         int res = n1 - n2;
        printf("\t\tThe first number (%d) is bigger, there is a difference of %d.\n",n1,res);
    }
    else{
        printf("\t\tThey are the same.\n");
    }
    return 0;
}