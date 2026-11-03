#include <stdio.h>
#include <stdlib.h>

int main() {
    int valeur_1 = 30;
    int valeur_2 = 34;
    int valeur_3 = 62;
    double moyenne = (valeur_1 + valeur_2 + valeur_3) / 3.0;
    printf("La moyenne des trois notes est: %.2f\n", moyenne);
    exit(0);
}