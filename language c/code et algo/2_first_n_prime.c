/*

ALGORITHM : Trouver les 20 premiers nombres premiers

Début
    fonction is_prime(number)
        Si number < 2, retourner FAUX
        
        Pour i allant de 2 à racine de number:
            Si number % i == 0, retourner FAUX
        Retourner VRAI

    fonction print_primes()
        compteur = 0
        n = 2
        Tant que compteur < 20:
            Si is_prime(n) est VRAI:
                Afficher n
                compteur = compteur + 1
            n = n + 1
Fin
*/

#include <stdio.h>

int is_prime(int number) {
    if (number < 2) {
        return 0; // FAUX
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // FAUX
        }
    }
    return 1; // VRAI
}

void print_primes() {
    int count = 0;
    int n = 2;
    while (count < 20) {
        if (is_prime(n)) {
            printf("%d ", n);
            count++;
        }
        n++;
    }
    printf("\n");
}