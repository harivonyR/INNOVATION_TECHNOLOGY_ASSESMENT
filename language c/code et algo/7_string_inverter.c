/*
ALGORITHM: un programme qui inverse une chaîne de caractères.
ex : MIT -> TIM

début

    chaine_originale = "MIT"
    chaine_inversée = chaine_originale

    fonction reverse_string(chaine_originale)
        i=0
        longueur = longueur de chaine_originale
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


void reverse_string(char str[], char reversed_str[]) {
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        reversed_str[i] = str[length - 1 - i];
    }
    
    reversed_str[length] = '\0'; // Ajouter le caractère de fin de chaîne
}