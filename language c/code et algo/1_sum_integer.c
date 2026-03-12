/*
ALGORITHM : Calculer la somme de deux entiers

Début
    fonction prendre a et b
    retourner a + b
Fin
*/

#include <stdio.h>

int calculate_sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;
    int result = calculate_sum(x, y);
    printf("The sum of %d and %d is %d\n", x, y, result);
    return 0;
}
