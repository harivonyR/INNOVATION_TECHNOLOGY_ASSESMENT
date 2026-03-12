/*
ALGORITHM: un programme qui inverse une chaîne de caractères.
ex : MIT -> TIM


début

    fonction count_string_length(chaine)
        longueur = 0
        tant que chaine[longueur] != '\0':
            longueur = longueur + 1
        retourner longueur
    
    fonction reverse_string(chaine_originale)
        i=0
        longueur = count_string_length(chaine_originale)

        tant que i < longueur:
            chaine_inversée[i] = chaine_originale[longueur - 1 - i]
            i = i + 1
        chaine_inversée[longueur] = '\0' // Ajouter le caractère de fin de chaîne

    fonction main()
        chaine_originale = "MIT"
        résultat = reverse_string(chaine_originale)
        Afficher "La chaîne inversée est : ", résultat

*/

#include <stdio.h>
#include <string.h>

int count_string_length(char chaine[]) {
    int longueur = 0;
    while (chaine[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}

void reverse_string(char original[], char reversed[]) {
    int length = count_string_length(original);
    for (int i = 0; i < length; i++) {
        reversed[i] = original[length - 1 - i];
    }
    reversed[length] = '\0'; // Ajouter le caractère de fin de chaîne
}

int main() {
    char original[] = "MIT";
    int length = count_string_length(original);
    char reversed[length + 1]; // ajouter une case pour le caractère de fin de chaîne '\0'
    reverse_string(original, reversed);
    printf("La chaîne inversée est : %s\n", reversed);

    return 0;
}