#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

float calcul_mediane(int tab[], int n) {
    qsort(tab, n, sizeof(int), compare);
    if (n % 2 == 0)
        return (tab[n/2 - 1] + tab[n/2]) / 2.0;
    else
        return tab[n/2];
}

int main() {
    int tab[] = {62, 59, 65, 4, 5};
    int n = sizeof(tab)/sizeof(tab[0]);

    printf("La mediane est %.2f\n", calcul_mediane(tab, n));
    return 0;
}
