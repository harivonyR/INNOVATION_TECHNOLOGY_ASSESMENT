/* ALGORITHM : Calculer le produit scalaire de deux vecteurs de taille n.

début
    fonction dot_product(vector_a, vector_b, n)
        somme = 0
        
        Pour i allant de 0 à n-1:
            somme = somme + (vector_a[i] * vector_b[i])

        retourne somme
fin
*/

#include <stdio.h>

int dot_product(int vector_a[], int vector_b[], int n) {
    int somme = 0;
    for (int i = 0; i < n; i++) {
        somme += vector_a[i] * vector_b[i];
    }
    return somme;
}

int main() {
    int n = 3;
    int vector_a[] = {1, 2, 3};
    int vector_b[] = {6, 7, 8};

    int result = dot_product(vector_a, vector_b, n);
    printf("Le produit scalaire des deux vecteurs est : %d\n", result);

    return 0;
}