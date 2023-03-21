// Exercice 3 :
// Créer un programme qui demande à l’utilisateur le radius d’un cercle et à partir de cette donnée,
// vous lui donnerez : le périmètre, l’area du disque et le volume de la sphère causé par ce radius. Mais
// attention, les résultats n’auront que deux chiffres après la virgule.


#include <stdio.h>
#include <math.h>
#define M_PI       3.14159265358979323846


int main (){

    float radius, perimeter, area, volume;

    // get radius
    printf("Choose the radius of your circle : \n");
    scanf("%f", &radius);

    // perimeter: 2 PI R
    perimeter = 2 * M_PI * radius;
    //area: PI R²
    area = M_PI * pow(radius, 2);
    //volume: (4PI Rcube) / 3
    volume = (4*M_PI * pow(radius,3)) / 3 ;

    printf("The radius: %.2f\nThe perimeter: %.2f\nThe area: %.2f\nThe volume %.2f", radius, perimeter, area, volume);

    return 0;
}