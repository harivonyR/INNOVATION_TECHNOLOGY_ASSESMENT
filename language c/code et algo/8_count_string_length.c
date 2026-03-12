/*
ALGORITHM : compter le nombre de caractères dans une chaîne de caractères.

début
    fonction count_string_length(chaine)
        longueur = 0
        tant que chaine[longueur] != '\0':
            longueur = longueur + 1
        retourner longueur

    fonction main()
        chaine = "Hello, World!"
        résultat = count_string_length(chaine)
        Afficher "La longueur de la chaîne est : ", résultat

*/

#include <stdio.h>

int count_string_length(char chaine[]) {
    int longueur = 0;
    while (chaine[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

int main() {
    char chaine[] = "Hello, World!";
    int result = count_string_length(chaine);
    printf("La longueur de la chaîne est : %d\n", result);
    return 0;
}