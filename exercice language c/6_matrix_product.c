/*
ALGORYTHM : calculer le produit de deux matrices A et B de taille m,n.

début 
    entier m = 3, n = 2,
    tableau A[m][n] = {{1, 2}, {3, 4}, {5, 6}},
    tableau B[m][n] = {{7, 8}, {9, 10}, {11, 12}},
    tableau C[m][n],
    entier i, j, k

    pour i allant de 0 à m-1 faire
        pour j allant de 0 à n-1 faire
            C[i][j] = 0
            pour k allant de 0 à n-1 faire
                C[i][j] = C[i][j] + A[i][k] * B[k][j]
            fin pour
        fin pour
    fin pour

    afficher "Le produit des matrices A et B est :"
    pour i allant de 0 à m-1 faire
        pour j allant de 0 à n-1 faire
            afficher C[i][j]
        fin pour
        afficher nouvelle ligne
    fin pour

*/

#include <stdio.h>

int main() {
    int m = 3, n = 2;
    int A[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int C[3][2];
    int i, j, k;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Le produit des matrices A et B est :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
