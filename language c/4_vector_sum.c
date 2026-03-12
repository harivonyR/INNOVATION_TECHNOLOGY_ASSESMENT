/*
ALGORITHM : Calculer la somme de deux vecteurs de taille n.

début
    somme_vector = tableau de taille n

    fonction vector_sum(vector_a, vector_b,somme_vector, n)
        
        Pour i allant de 0 à n-1:
            somme_vector[i] = vector_a[i] + vector_b[i]
fin
*/

#include <stdio.h>

void vector_sum(int vector_a[], int vector_b[], int n, int somme_vector[]) {
    for (int i = 0; i < n; i++) {
        somme_vector[i] = vector_a[i] + vector_b[i];
    }
}

int main() {
    int n = 3;
    int vector_a[] = {1, 2, 3};
    int vector_b[] = {6, 7, 8};
    int somme_vector[3];

    vector_sum(vector_a, vector_b, n, somme_vector);

    printf("La somme des deux vecteurs est : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", somme_vector[i]);
    }
    printf("\n");

    return 0;
}