/*
ALGORITHM : Calculer la somme des n premiers termes d'une série


Suite : U[0] = 3, U[1]=-4, U[n] = 2*U[n-1] + 3*U[n-2]

début
    fonction sum_nth_first_term(n)
        U0 = 3
        U1 = -4 
    
        Si n == 0, retourner U0
        Si n == 1, retourner U0 + U1

        somme = U0 + U1

        Un_moins_2 = 3
        Un_moins_1 = -4
        
        Pour i allant de 2 à n:
            Un = 2 * Un_moins_1 + 3 * Un_moins_2
            Un_moins_2 = Un_moins_1
            Un_moins_1 = Un
        
            somme += Un

        retourner somme

    fonction main()
        n = 30
        résultat = sum_nth_first_term(n)
        Afficher "La somme des ", n, " premiers termes de la suite est : ", résultat
Fin
*/

#include <stdio.h>

int sum_nth_first_term(int n) {
    int U0 = 3;
    int U1 = -4;

    if (n == 0) {
        return U0;
    }
    if (n == 1) {
        return U0 + U1;
    }

    int somme = U0 + U1;
    int Un_moins_2 = U0;
    int Un_moins_1 = U1;

    for (int i = 2; i <= n; i++) {
        int Un = 2 * Un_moins_1 + 3 * Un_moins_2;
        Un_moins_2 = Un_moins_1;
        Un_moins_1 = Un;
        somme += Un;
    }

    return somme;
}

int main() {
    int n = 30;
    int résultat = sum_nth_first_term(n);
    printf("La somme des %d premiers termes de la suite est : %d\n", n, résultat);
    return 0;
}