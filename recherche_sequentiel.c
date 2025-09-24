#include <stdio.h>

int recherche_sequentielle(int tab[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (tab[i] == x)
            return i;
    return -1;
}

int main() {
    int tab[] = {5, 8, 12, 3, 9};
    int n = sizeof(tab)/sizeof(tab[0]);
    int x = 8;

    int index = recherche_sequentielle(tab, n, x);
    if (index != -1)
        printf("Element %d trouve a l'indice %d\n", x, index);
    else
        printf("Element %d non trouve\n", x);

    return 0;
}