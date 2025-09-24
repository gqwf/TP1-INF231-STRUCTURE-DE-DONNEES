#include <stdio.h>
#define ROW 3
#define COL 3

void somme_matrices(int A[ROW][COL], int B[ROW][COL], int C[ROW][COL]) {
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void afficher_matrice(int M[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
}

int main() {
    int A[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[ROW][COL] = {{9,8,7},{6,5,4},{3,2,1}};
    int C[ROW][COL];

    somme_matrices(A, B, C);
    printf("Somme des matrices:\n");
    afficher_matrice(C);

    return 0;
}
