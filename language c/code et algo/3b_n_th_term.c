/*
ALGORITHM : Calculer la 70 ième termes de la suite.

Suite : U[0] = 3, U[1]=-4, U[n] = 2*U[n-1] + 3*U[n-2]

début
    fonction nth_term(n)
        Si n == 0, retourner 3
        Si n == 1, retourner -4

        Un_minus_2 = 3
        Un_moins_1 = -4
        
        Pour i allant de 2 à n:
            Un = 2 * Un_moins_1 + 3 * Un_moins_2
            Un_moins_2 = Un_moins_1
            Un_moins_1 = Un
        
            retourner Un

    fonction main()
        n = 70
        résultat = nth_term(n)
        Afficher "Le ", n, " ième terme de la suite est : ", résultat
Fin
*/

#include <stdio.h>

int nth_term(int n) {
    if (n == 0) {
        return 3;
    }
    if (n == 1) {
        return -4;
    }
    
    int Un_moins_2 = 3;  // U[0]
    int Un_moins_1 = -4; // U[1]
    int Un = 0;

    for (int i = 2; i <= n; i++) {
        Un = 2 * Un_moins_1 + 3 * Un_moins_2;
        Un_moins_2 = Un_moins_1;
        Un_moins_1 = Un;
    }
    
    return Un;
}

int main() {
    int n = 70;
    int result = nth_term(n);
    printf("Le %d ième terme de la suite est : %d\n", n, result);
    return 0;
}