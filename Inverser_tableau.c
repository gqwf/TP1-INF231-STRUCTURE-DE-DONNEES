#include <stdio.h>

void inverser_tableau(int tab[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }
}

void afficher_Mtableau(int tab[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

int main() {
    int tab[] = {1, 1001, 25, 97, 5};
    int n = sizeof(tab)/sizeof(tab[0]);

    inverser_tableau(tab, n);
    printf("Tableau inverse:\n");
    afficher_Mtableau(tab, n);

    return 0;
}
